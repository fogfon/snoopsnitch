/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionRequest_v7e0ext_IEs_H_
#define	_RRCConnectionRequest_v7e0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionRequest_v7e0ext_IEs__supportForCSVoiceoverHSPA {
	RRCConnectionRequest_v7e0ext_IEs__supportForCSVoiceoverHSPA_true	= 0
} e_RRCConnectionRequest_v7e0ext_IEs__supportForCSVoiceoverHSPA;

/* RRCConnectionRequest-v7e0ext-IEs */
typedef struct RRCConnectionRequest_v7e0ext_IEs {
	long	*supportForCSVoiceoverHSPA	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRequest_v7e0ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportForCSVoiceoverHSPA_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest_v7e0ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRequest_v7e0ext_IEs_H_ */
#include <asn_internal.h>
