/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 */

#ifndef	_ObjectName_H_
#define	_ObjectName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ObjectName {
	ObjectName_acl	= 1,
	ObjectName_aclgroup	= 2,
	ObjectName_ippool	= 3,
	ObjectName_context	= 4,
	ObjectName_host	= 5,
	ObjectName_node	= 6,
	ObjectName_peer	= 7,
	ObjectName_permission	= 8,
	ObjectName_client	= 9
	/*
	 * Enumeration is extensible
	 */
} e_ObjectName;

/* ObjectName */
typedef long	 ObjectName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ObjectName;
asn_struct_free_f ObjectName_free;
asn_struct_print_f ObjectName_print;
asn_constr_check_f ObjectName_constraint;
ber_type_decoder_f ObjectName_decode_ber;
der_type_encoder_f ObjectName_encode_der;
xer_type_decoder_f ObjectName_decode_xer;
xer_type_encoder_f ObjectName_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ObjectName_H_ */
#include <asn_internal.h>
