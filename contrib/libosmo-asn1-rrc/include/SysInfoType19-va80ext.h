/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType19_va80ext_H_
#define	_SysInfoType19_va80ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultipleEUTRAFrequencyInfoList;

/* SysInfoType19-va80ext */
typedef struct SysInfoType19_va80ext {
	struct MultipleEUTRAFrequencyInfoList	*multipleEutraFrequencyInfoList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType19_va80ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType19_va80ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultipleEUTRAFrequencyInfoList.h"

#endif	/* _SysInfoType19_va80ext_H_ */
#include <asn_internal.h>
