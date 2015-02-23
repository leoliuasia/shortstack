/*
 * THIS FILE IS MACHINE-GENERATED. DO NOT EDIT.
 *
 * Content generated by Echelon IzoT Interface Interpreter 1.10.03 at 23-Feb-2015 11:00
 * Copyright (c) Echelon Corporation 2015
 *
 * Target: Echelon IzoT ShortStack (SS430_FT6050_SYS20000kHz)
 *
 * Use of this code is subject to your compliance with the terms of the
 * Echelon IzoT(tm) ShortStack License Agreement which is
 * available at www.echelon.com
 */
#ifndef DEFINED_REGULARDEV_H
    /* Define macro derived from the current output name */
#   define DEFINED_REGULARDEV_H

#define LON_FRAMEWORK_TYPE_III 1

#include <stddef.h>
#include "LonPlatform.h"

/*
 * Data type definitions
 */
typedef LonWord SNVT_ppm;

typedef SNVT_ppm SCPTminDeltaCO2;

typedef LonWord SNVT_time_sec;

typedef SNVT_time_sec SCPTmaxSendTime;

typedef SNVT_time_sec SCPTminSendTime;

/* end Data type definitions */

/*
 * Block type definitions and references
 */
#define SFPTco2Sensor(mod)   SFPTco2Sensor_##mod
typedef struct {
   unsigned global_index;
   struct {
      SNVT_ppm data;
      unsigned global_index;
      SCPTminDeltaCO2* nciCO2MinDelta;
   } nvoCO2ppm;
   SCPTmaxSendTime* nciMaxSendTime;
   SCPTminSendTime* nciMinSendTime;
} SFPTco2Sensor_regular;

extern SFPTco2Sensor_regular regularCO2;

#define LON_FB_COUNT 1
/* end Block type definitions and references */

/*
 * Device datapoint references
 */
/* end Device datapoint references */

/*
 * Device property references
 */
/* end Device property references */

/*
 * Message tag references
 */
/* end Message tag references */

#define LON_NV_COUNT 4
/* For compatibility with older ShortStack applications */
#define LonNvCount LON_NV_COUNT
#define LON_PERSISTENT_NVS 3
#define LON_MT_COUNT 0
/* For compatibility with older ShortStack applications */
#define LonMtCount LON_MT_COUNT

#define LON_APP_OUTPUT_BUFSIZE 146
#define LON_APP_INPUT_BUFSIZE 146
#define LON_ISI_ENABLED 0x00
#define LON_EXPLICIT_ADDRESSING (LON_ISI_ENABLED)
#define LON_USE_DEFAULT_COMMPARAMS 0x40 /* see LonCustomCommunicationParameters() */
#define LON_APP_SIGNATURE 0x00209B8D
#define LON_APPLICATION_MESSAGES 0
#define LON_SERVICE_PIN_TIMER 0
#define LON_PROGRAM_ID "9F:FF:FF:0A:46:04:04:00"

#define LON_NM_QUERY_FUNCTIONS 0
#define LON_NM_UPDATE_FUNCTIONS 0
#define LON_UTILITY_FUNCTIONS 0

#define LON_DMF_WINDOW_ENABLED 0
#define LON_DMF_WINDOW_SIZE    0

extern const LonByte* regularLonGetSiData(unsigned* pLength);
extern const LonByte* regularLonGetAppInitData(void);
extern void* regularLonGetNvTable(void);
extern unsigned regularLonGetNvCount(void);
extern unsigned regularLonGetMtCount(void);
extern LonUbits32 regularLonGetSignature(void);
extern void regularLonFrameworkInit(void);

#ifndef DEFINED_SHORTSTACKDEV_H
    /* Define this unless same as output name */
#   define DEFINED_SHORTSTACKDEV_H
#endif
#endif   /* DEFINED_REGULARDEV_H */