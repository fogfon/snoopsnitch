/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PagingPermissionWithAccessControlForSharedNetwork_H_
#define	_PagingPermissionWithAccessControlForSharedNetwork_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PagingPermissionWithAccessControlList.h"
#include "PagingPermissionWithAccessControlParameters.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PagingPermissionWithAccessControlForSharedNetwork_PR {
	PagingPermissionWithAccessControlForSharedNetwork_PR_NOTHING,	/* No components present */
	PagingPermissionWithAccessControlForSharedNetwork_PR_pagingPermissionWithAccessControlList,
	PagingPermissionWithAccessControlForSharedNetwork_PR_pagingPermissionWithAccessControlForAll
} PagingPermissionWithAccessControlForSharedNetwork_PR;

/* PagingPermissionWithAccessControlForSharedNetwork */
typedef struct PagingPermissionWithAccessControlForSharedNetwork {
	PagingPermissionWithAccessControlForSharedNetwork_PR present;
	union PagingPermissionWithAccessControlForSharedNetwork_u {
		PagingPermissionWithAccessControlList_t	 pagingPermissionWithAccessControlList;
		PagingPermissionWithAccessControlParameters_t	 pagingPermissionWithAccessControlForAll;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PagingPermissionWithAccessControlForSharedNetwork_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PagingPermissionWithAccessControlForSharedNetwork;

#ifdef __cplusplus
}
#endif

#endif	/* _PagingPermissionWithAccessControlForSharedNetwork_H_ */
#include <asn_internal.h>