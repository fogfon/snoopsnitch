/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DL_FDPCH_InfoPerRL_r7_H_
#define	_DL_FDPCH_InfoPerRL_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PCPICH-UsageForChannelEst.h"
#include "DPCH-FrameOffset.h"
#include "FDPCH-SlotFormat.h"
#include "SecondaryScramblingCode.h"
#include <NativeInteger.h>
#include "TPC-CombinationIndex.h"
#include "STTDIndication.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SecondaryCPICH_Info;

/* DL-FDPCH-InfoPerRL-r7 */
typedef struct DL_FDPCH_InfoPerRL_r7 {
	PCPICH_UsageForChannelEst_t	 pCPICH_UsageForChannelEst;
	DPCH_FrameOffset_t	 fdpch_FrameOffset;
	FDPCH_SlotFormat_t	*fdpch_SlotFormat	/* OPTIONAL */;
	struct SecondaryCPICH_Info	*secondaryCPICH_Info	/* OPTIONAL */;
	SecondaryScramblingCode_t	*secondaryScramblingCode	/* OPTIONAL */;
	long	 dl_ChannelisationCode;
	TPC_CombinationIndex_t	 tpc_CombinationIndex;
	STTDIndication_t	*sttdIndication	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_FDPCH_InfoPerRL_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_FDPCH_InfoPerRL_r7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SecondaryCPICH-Info.h"

#endif	/* _DL_FDPCH_InfoPerRL_r7_H_ */
#include <asn_internal.h>
