/*
 * Dynamic Network Directory Service
 * Copyright (C) 2009-2014
 * Nicolas J. Bouliane <nib@dynvpn.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation; version 3 of the license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details
 */

#ifndef DNDS_CERT_H
#define DNDS_CERT_H

#include <openssl/x509_vfy.h>

typedef struct node_info {
	char type[3+1];
	char uuid[36+1];
	char context_id[5+1];
} node_info_t;

typedef struct passport {

        X509 *certificate;
        EVP_PKEY *keyring;
        X509_STORE *trusted_authority;
} passport_t;

node_info_t *cn2node_info(char *cn);
passport_t *pki_passport_load_from_memory(char *certificate, char *privatekey, char *trusted_authority);
passport_t *pki_passport_load_from_file(const char *certificate_filename,
                                        const char *privatekey_filename,
                                        const char *trusted_authority_filename);
#endif /* DNDS_CERT_H */
