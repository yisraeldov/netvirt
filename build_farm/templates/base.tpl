#!/usr/bin/env bash

set -x

release_dir="$1"

{% block global_variables %}{% endblock %}

{% block install_build_dependencies %}{% endblock %}

function mcd () {
    mkdir -p "$1" && pushd "$1"
}

function clone_or_pull () {
     if [ -d "$2" ] ; then
         pushd "$2"
         git pull || exit 1
         popd
     else
         git clone "$1" "$2" || exit 1
     fi
}

function submodule () {
    [ ! -d "$2" ] && git submodule add "$1" "$2"
}

function clone_dependencies () {
    set -e
    clone_or_pull https://github.com/netvirt/netvirt.git netvirt
    cd netvirt
    git submodule init
    git submodule update
    set +e
}

function fix_libconfig_git () {
    # git creates files in alphabetic order, messing with dependency detection
    # of make. Specifically, *.y files are created after *.c files, which are
    # generated from *.y files
    touch lib/*.c
}

function build_dependencies () {
    pushd udt4
    {% block build_udt4 %}{% endblock %}
    popd

    pushd libconfig
    fix_libconfig_git
    {% block build_libconfig %}{% endblock %}
    popd

    pushd tapcfg
    {% block build_tapcfg %}{% endblock %}
    popd
}

{% block build_nvagent %}{% endblock %}

install_build_dependencies
clone_dependencies
build_dependencies
build_nvagent
