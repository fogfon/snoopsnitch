/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_HandoverToUTRANComplete_vb50ext_IEs_H_
#define	_HandoverToUTRANComplete_vb50ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverToUTRANComplete_vb50ext_IEs__connEstFailInfoAvailable {
	HandoverToUTRANComplete_vb50ext_IEs__connEstFailInfoAvailable_true	= 0
} e_HandoverToUTRANComplete_vb50ext_IEs__connEstFailInfoAvailable;

/* HandoverToUTRANComplete-vb50ext-IEs */
typedef struct HandoverToUTRANComplete_vb50ext_IEs {
	long	*connEstFailInfoAvailable	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverToUTRANComplete_vb50ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_connEstFailInfoAvailable_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HandoverToUTRANComplete_vb50ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverToUTRANComplete_vb50ext_IEs_H_ */
#include <asn_internal.h>