/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_WimaxNMR_H_
#define	_WimaxNMR_H_


#include "asn_application.h"

/* Including external dependencies */
#include "WimaxBsID.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportedLocation;

/* WimaxNMR */
typedef struct WimaxNMR {
	WimaxBsID_t	 wimaxBsID;
	long	*relDelay	/* OPTIONAL */;
	long	*relDelaystd	/* OPTIONAL */;
	long	*rSSI	/* OPTIONAL */;
	long	*rSSIstd	/* OPTIONAL */;
	long	*bSTxPower	/* OPTIONAL */;
	long	*cINR	/* OPTIONAL */;
	long	*cINRstd	/* OPTIONAL */;
	struct ReportedLocation	*bSLocation	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WimaxNMR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WimaxNMR;
extern asn_SEQUENCE_specifics_t asn_SPC_WimaxNMR_specs_1;
extern asn_TYPE_member_t asn_MBR_WimaxNMR_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReportedLocation.h"

#endif	/* _WimaxNMR_H_ */
#include <asn_internal.h>