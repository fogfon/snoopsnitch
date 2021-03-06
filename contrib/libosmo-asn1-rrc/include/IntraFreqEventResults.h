/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_IntraFreqEventResults_H_
#define	_IntraFreqEventResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EventIDIntraFreq.h"
#include "CellMeasurementEventResults.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntraFreqEventResults */
typedef struct IntraFreqEventResults {
	EventIDIntraFreq_t	 eventID;
	CellMeasurementEventResults_t	 cellMeasurementEventResults;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqEventResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqEventResults;

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqEventResults_H_ */
#include <asn_internal.h>
