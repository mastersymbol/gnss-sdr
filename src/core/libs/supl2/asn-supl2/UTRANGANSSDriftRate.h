/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_UTRANGANSSDriftRate_H_
#define	_UTRANGANSSDriftRate_H_


#include "asn_application.h"

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UTRANGANSSDriftRate {
	UTRANGANSSDriftRate_utran_GANSSDrift0	= 0,
	UTRANGANSSDriftRate_utran_GANSSDrift1	= 1,
	UTRANGANSSDriftRate_utran_GANSSDrift2	= 2,
	UTRANGANSSDriftRate_utran_GANSSDrift5	= 3,
	UTRANGANSSDriftRate_utran_GANSSDrift10	= 4,
	UTRANGANSSDriftRate_utran_GANSSDrift15	= 5,
	UTRANGANSSDriftRate_utran_GANSSDrift25	= 6,
	UTRANGANSSDriftRate_utran_GANSSDrift50	= 7,
	UTRANGANSSDriftRate_utran_GANSSDrift_1	= 8,
	UTRANGANSSDriftRate_utran_GANSSDrift_2	= 9,
	UTRANGANSSDriftRate_utran_GANSSDrift_5	= 10,
	UTRANGANSSDriftRate_utran_GANSSDrift_10	= 11,
	UTRANGANSSDriftRate_utran_GANSSDrift_15	= 12,
	UTRANGANSSDriftRate_utran_GANSSDrift_25	= 13,
	UTRANGANSSDriftRate_utran_GANSSDrift_50	= 14
} e_UTRANGANSSDriftRate;

/* UTRANGANSSDriftRate */
typedef long	 UTRANGANSSDriftRate_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UTRANGANSSDriftRate_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UTRANGANSSDriftRate;
extern const asn_INTEGER_specifics_t asn_SPC_UTRANGANSSDriftRate_specs_1;
asn_struct_free_f UTRANGANSSDriftRate_free;
asn_struct_print_f UTRANGANSSDriftRate_print;
asn_constr_check_f UTRANGANSSDriftRate_constraint;
ber_type_decoder_f UTRANGANSSDriftRate_decode_ber;
der_type_encoder_f UTRANGANSSDriftRate_encode_der;
xer_type_decoder_f UTRANGANSSDriftRate_decode_xer;
xer_type_encoder_f UTRANGANSSDriftRate_encode_xer;
per_type_decoder_f UTRANGANSSDriftRate_decode_uper;
per_type_encoder_f UTRANGANSSDriftRate_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UTRANGANSSDriftRate_H_ */
#include <asn_internal.h>