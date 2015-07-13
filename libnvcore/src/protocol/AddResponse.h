/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 * 	`asn1c -fnative-types`
 */

#ifndef	_AddResponse_H_
#define	_AddResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DNDSResult.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AddResponse */
typedef DNDSResult_t	 AddResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AddResponse;
asn_struct_free_f AddResponse_free;
asn_struct_print_f AddResponse_print;
asn_constr_check_f AddResponse_constraint;
ber_type_decoder_f AddResponse_decode_ber;
der_type_encoder_f AddResponse_encode_der;
xer_type_decoder_f AddResponse_decode_xer;
xer_type_encoder_f AddResponse_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _AddResponse_H_ */
#include <asn_internal.h>
