/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_E_PUCH_TS_Slots_H_
#define	_E_PUCH_TS_Slots_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "MidambleShiftAndBurstType-EDCH.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E-PUCH-TS-Slots */
typedef struct E_PUCH_TS_Slots {
	long	 ts_Number;
	MidambleShiftAndBurstType_EDCH_t	 midambleShiftAndBurstType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_PUCH_TS_Slots_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_PUCH_TS_Slots;

#ifdef __cplusplus
}
#endif

#endif	/* _E_PUCH_TS_Slots_H_ */
#include <asn_internal.h>
