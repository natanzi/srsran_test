/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-NRT-IEs"
 * 	found in "/local/mnt/openairinterface5g/openair2/RIC_AGENT/MESSAGES/ASN1/R01/e2sm-gNB-NRT-v401.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/mnt/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/E2SM-GNB-NRT/`
 */

#ifndef	_E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition_H_
#define	_E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2SM_GNB_NRT_E2SM-gNB-NRT-ActionDefinition-Format1.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition_PR {
	E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition_PR_NOTHING,	/* No components present */
	E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition_PR_actionDefinition_Format1
	/* Extensions may appear below */
	
} E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition_PR;

/* E2SM_GNB_NRT_E2SM-gNB-NRT-ActionDefinition */
typedef struct E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition {
	E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition_PR present;
	union E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition_u {
		E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition_Format1_t	 actionDefinition_Format1;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_GNB_NRT_E2SM_gNB_NRT_ActionDefinition_H_ */
#include "asn_internal.h"
