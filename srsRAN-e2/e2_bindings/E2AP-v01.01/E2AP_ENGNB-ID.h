/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "./e2ap-v01.01.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D E2AP-v01.01/`
 */

#ifndef	_E2AP_ENGNB_ID_H_
#define	_E2AP_ENGNB_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2AP_ENGNB_ID_PR {
	E2AP_ENGNB_ID_PR_NOTHING,	/* No components present */
	E2AP_ENGNB_ID_PR_gNB_ID
	/* Extensions may appear below */
	
} E2AP_ENGNB_ID_PR;

/* E2AP_ENGNB-ID */
typedef struct E2AP_ENGNB_ID {
	E2AP_ENGNB_ID_PR present;
	union E2AP_ENGNB_ID_u {
		BIT_STRING_t	 gNB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ENGNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ENGNB_ID;
extern asn_CHOICE_specifics_t asn_SPC_E2AP_ENGNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_E2AP_ENGNB_ID_1[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ENGNB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _E2AP_ENGNB_ID_H_ */
#include "asn_internal.h"
