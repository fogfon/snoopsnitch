/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_FrequencyBandsIndicatorSupport_H_
#define	_FrequencyBandsIndicatorSupport_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FrequencyBandsRedirectionFDD.h"
#include <constr_SEQUENCE.h>
#include "FrequencyBandsIndicatorTDD128.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FrequencyBandsIndicatorSupport__modeSpecificInfo_PR {
	FrequencyBandsIndicatorSupport__modeSpecificInfo_PR_NOTHING,	/* No components present */
	FrequencyBandsIndicatorSupport__modeSpecificInfo_PR_fdd,
	FrequencyBandsIndicatorSupport__modeSpecificInfo_PR_tdd
} FrequencyBandsIndicatorSupport__modeSpecificInfo_PR;

/* FrequencyBandsIndicatorSupport */
typedef struct FrequencyBandsIndicatorSupport {
	struct FrequencyBandsIndicatorSupport__modeSpecificInfo {
		FrequencyBandsIndicatorSupport__modeSpecificInfo_PR present;
		union FrequencyBandsIndicatorSupport__modeSpecificInfo_u {
			struct FrequencyBandsIndicatorSupport__modeSpecificInfo__fdd {
				FrequencyBandsRedirectionFDD_t	 frequencyBandsSupportFDD;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct FrequencyBandsIndicatorSupport__modeSpecificInfo__tdd {
				FrequencyBandsIndicatorTDD128_t	 frequencyBandsSupportTDD128;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FrequencyBandsIndicatorSupport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FrequencyBandsIndicatorSupport;

#ifdef __cplusplus
}
#endif

#endif	/* _FrequencyBandsIndicatorSupport_H_ */
#include <asn_internal.h>