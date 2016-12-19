﻿#ifndef __TS_TXT_CONV_H_1R2L9C9F_EGCL_0NKM_4Q4R_V8XI61V3PJST__
#define __TS_TXT_CONV_H_1R2L9C9F_EGCL_0NKM_4Q4R_V8XI61V3PJST__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
//=============================================================================
//				  Constant Definition
//=============================================================================
typedef enum TS_CHAR_CODE_TAG
{
    TS_ISO_IEC_6937                       = 0,
    TS_ISO_IEC_8859_1                     = 1,
    TS_ISO_IEC_8859_2                     = 2,
    TS_ISO_IEC_8859_3                     = 3,
    TS_ISO_IEC_8859_4                     = 4,
    TS_ISO_IEC_8859_5                     = 5,
    TS_ISO_IEC_8859_6                     = 6,
    TS_ISO_IEC_8859_7                     = 7,
    TS_ISO_IEC_8859_8                     = 8,
    TS_ISO_IEC_8859_9                     = 9,
    TS_ISO_IEC_8859_10                    = 10,
    TS_ISO_IEC_8859_11                    = 11,
    TS_ISO_IEC_8859_13                    = 13,
    TS_ISO_IEC_8859_14                    = 14,
    TS_ISO_IEC_8859_15                    = 15,
    TS_ISO_IEC_10646_1                    = 16,
    TS_KSC5601_1987                       = 17,
    TS_GB_2312_1980                       = 18,
    TS_BIG5_SUBSET_OF_ISO_IEC_10646_1     = 19,
    TS_UTF_8_ENCODING_OF_ISO_IEC_10646_1  = 20
} TS_CHAR_CODE;

//=============================================================================
//				  Macro Definition
//=============================================================================


//=============================================================================
//				  Structure Definition
//=============================================================================


//=============================================================================
//				  Global Data Definition
//=============================================================================


//=============================================================================
//				  Private Function Definition
//=============================================================================


//=============================================================================
//				  Public Function Definition
//=============================================================================
uint32_t
tsTxt_ConvToUtf16(
    uint16_t        *pOut,
    uint8_t         *pIn,
    uint32_t        length,
    TS_CHAR_CODE    charCode);

#ifdef __cplusplus
}
#endif

#endif