
/* File generated by gen_cfile.py. Should not be modified. */

#include "STM32Encoders.h"

/**************************************************************************/
/* Declaration of mapped variables                                        */
/**************************************************************************/
UNS16 Operating_Parameters = 0x0;   /* Mapped at index 0x6000, subindex 0x00 */
UNS32 Position_Value = 0x0;   /* Mapped at index 0x6004, subindex 0x00 */
INTEGER32 Position_Value_for_Multi_Sensor_Device[] =    /* Mapped at index 0x6020, subindex 0x01 - 0x02 */
{
  0x0,  /* 0 */
  0x0 /* 0 */
};
UNS16 Operating_Status = 0x0;   /* Mapped at index 0x6500, subindex 0x00 */
UNS32 Single_Turn_Resolution = 0x0;   /* Mapped at index 0x6501, subindex 0x00 */
UNS16 Number_of_Distinguishable_Revolutions = 0x0;    /* Mapped at index 0x6502, subindex 0x00 */
UNS40 Number_of_High_Precision_Revolutions = 0x0;   /* Mapped at index 0x6510, subindex 0x00 */

/**************************************************************************/
/* Declaration of value range types                                       */
/**************************************************************************/

#define valueRange_EMC 0x9F /* Type for index 0x1003 subindex 0x00 (only set of value 0 is possible) */
UNS32 STM32Encoders_valueRangeTest (UNS8 typeValue, void * value)
{
  switch (typeValue) {
  case valueRange_EMC:
    if (*(UNS8*)value != (UNS8)0) return OD_VALUE_RANGE_EXCEEDED;
    break;
  }
  return 0;
}

/**************************************************************************/
/* The node id                                                            */
/**************************************************************************/
/* node_id default value.*/
UNS8 STM32Encoders_bDeviceNodeId = 0x00;

/**************************************************************************/
/* Array of message processing information */

const UNS8 STM32Encoders_iam_a_slave = 1;

TIMER_HANDLE STM32Encoders_heartBeatTimers[1];

/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

                               OBJECT DICTIONARY

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

/* index 0x1000 :   Device Type. */
UNS32 STM32Encoders_obj1000 = 0xA0196;  /* 655766 */
subindex STM32Encoders_Index1000[] = {
  { RO, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1000 }
};

/* index 0x1001 :   Error Register. */
UNS8 STM32Encoders_obj1001 = 0x0; /* 0 */
subindex STM32Encoders_Index1001[] = {
  { RO, uint8, sizeof (UNS8), (void*)&STM32Encoders_obj1001 }
};

/* index 0x1003 :   Pre-defined Error Field */
UNS8 STM32Encoders_highestSubIndex_obj1003 = 0; /* number of subindex - 1*/
UNS32 STM32Encoders_obj1003[] = {
  0x0 /* 0 */
};
ODCallback_t STM32Encoders_Index1003_callbacks[] = {
  NULL,
  NULL,
};
subindex STM32Encoders_Index1003[] = {
  { RW, valueRange_EMC, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj1003 },
  { RO, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1003[0] }
};

/* index 0x1005 :   SYNC COB ID */
UNS32 STM32Encoders_obj1005 = 0x0;   /* 0 */

/* index 0x1006 :   Communication / Cycle Period */
UNS32 STM32Encoders_obj1006 = 0x0;   /* 0 */

/* index 0x100C :   Guard Time. */
UNS16 STM32Encoders_obj100C = 0x0;  /* 0 */
subindex STM32Encoders_Index100C[] = {
  { RW, uint16, sizeof (UNS16), (void*)&STM32Encoders_obj100C }
};

/* index 0x100D :   Life Time Factor. */
UNS8 STM32Encoders_obj100D = 0x0; /* 0 */
subindex STM32Encoders_Index100D[] = {
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_obj100D }
};

/* index 0x1014 :   Emergency COB ID. */
UNS32 STM32Encoders_obj1014 = 0x80; /* 128 */
subindex STM32Encoders_Index1014[] = {
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1014 }
};

/* index 0x1016 :   Consumer Heartbeat Time */
UNS8 STM32Encoders_highestSubIndex_obj1016 = 0;
UNS32 STM32Encoders_obj1016[] = {0};

/* index 0x1017 :   Producer Heartbeat Time */
UNS16 STM32Encoders_obj1017 = 0x0;   /* 0 */

/* index 0x1018 :   Identity. */
UNS8 STM32Encoders_highestSubIndex_obj1018 = 4; /* number of subindex - 1*/
UNS32 STM32Encoders_obj1018_Vendor_ID = 0x0;  /* 0 */
UNS32 STM32Encoders_obj1018_Product_Code = 0x0; /* 0 */
UNS32 STM32Encoders_obj1018_Revision_Number = 0x0;  /* 0 */
UNS32 STM32Encoders_obj1018_Serial_Number = 0x0;  /* 0 */
subindex STM32Encoders_Index1018[] = {
  { RO, uint8, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj1018 },
  { RO, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1018_Vendor_ID },
  { RO, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1018_Product_Code },
  { RO, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1018_Revision_Number },
  { RO, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1018_Serial_Number }
};

/* index 0x1200 :   Server SDO Parameter. */
UNS8 STM32Encoders_highestSubIndex_obj1200 = 2; /* number of subindex - 1*/
UNS32 STM32Encoders_obj1200_COB_ID_Client_to_Server_Receive_SDO = 0x600;  /* 1536 */
UNS32 STM32Encoders_obj1200_COB_ID_Server_to_Client_Transmit_SDO = 0x580; /* 1408 */
subindex STM32Encoders_Index1200[] = {
  { RO, uint8, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj1200 },
  { RO, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1200_COB_ID_Client_to_Server_Receive_SDO },
  { RO, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1200_COB_ID_Server_to_Client_Transmit_SDO }
};

/* index 0x1800 :   Transmit PDO 1 Parameter. */
UNS8 STM32Encoders_highestSubIndex_obj1800 = 5; /* number of subindex - 1*/
UNS32 STM32Encoders_obj1800_COB_ID_used_by_PDO = 0x180; /* 384 */
UNS8 STM32Encoders_obj1800_Transmission_Type = 0xFE;  /* 254 */
UNS16 STM32Encoders_obj1800_Inhibit_Time = 0x0; /* 0 */
UNS8 STM32Encoders_obj1800_Compatibility_Entry = 0x0; /* 0 */
UNS16 STM32Encoders_obj1800_Event_Timer = 0x0;  /* 0 */
ODCallback_t STM32Encoders_Index1800_callbacks[] = {
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
};
subindex STM32Encoders_Index1800[] = {
  { RO, uint8, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj1800 },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1800_COB_ID_used_by_PDO },
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_obj1800_Transmission_Type },
  { RW, uint16, sizeof (UNS16), (void*)&STM32Encoders_obj1800_Inhibit_Time },
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_obj1800_Compatibility_Entry },
  { RW, uint16, sizeof (UNS16), (void*)&STM32Encoders_obj1800_Event_Timer }
};

/* index 0x1801 :   Transmit PDO 2 Parameter. */
UNS8 STM32Encoders_highestSubIndex_obj1801 = 5; /* number of subindex - 1*/
UNS32 STM32Encoders_obj1801_COB_ID_used_by_PDO = 0x280; /* 640 */
UNS8 STM32Encoders_obj1801_Transmission_Type = 0x1; /* 1 */
UNS16 STM32Encoders_obj1801_Inhibit_Time = 0x0; /* 0 */
UNS8 STM32Encoders_obj1801_Compatibility_Entry = 0x0; /* 0 */
UNS16 STM32Encoders_obj1801_Event_Timer = 0x0;  /* 0 */
ODCallback_t STM32Encoders_Index1801_callbacks[] = {
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
};
subindex STM32Encoders_Index1801[] = {
  { RO, uint8, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj1801 },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1801_COB_ID_used_by_PDO },
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_obj1801_Transmission_Type },
  { RW, uint16, sizeof (UNS16), (void*)&STM32Encoders_obj1801_Inhibit_Time },
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_obj1801_Compatibility_Entry },
  { RW, uint16, sizeof (UNS16), (void*)&STM32Encoders_obj1801_Event_Timer }
};

/* index 0x1802 :   Transmit PDO 3 Parameter. */
UNS8 STM32Encoders_highestSubIndex_obj1802 = 5; /* number of subindex - 1*/
UNS32 STM32Encoders_obj1802_COB_ID_used_by_PDO = 0x380; /* 896 */
UNS8 STM32Encoders_obj1802_Transmission_Type = 0x0; /* 0 */
UNS16 STM32Encoders_obj1802_Inhibit_Time = 0x0; /* 0 */
UNS8 STM32Encoders_obj1802_Compatibility_Entry = 0x0; /* 0 */
UNS16 STM32Encoders_obj1802_Event_Timer = 0x0;  /* 0 */
ODCallback_t STM32Encoders_Index1802_callbacks[] = {
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
};
subindex STM32Encoders_Index1802[] = {
  { RO, uint8, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj1802 },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1802_COB_ID_used_by_PDO },
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_obj1802_Transmission_Type },
  { RW, uint16, sizeof (UNS16), (void*)&STM32Encoders_obj1802_Inhibit_Time },
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_obj1802_Compatibility_Entry },
  { RW, uint16, sizeof (UNS16), (void*)&STM32Encoders_obj1802_Event_Timer }
};

/* index 0x1803 :   Transmit PDO 4 Parameter. */
UNS8 STM32Encoders_highestSubIndex_obj1803 = 5; /* number of subindex - 1*/
UNS32 STM32Encoders_obj1803_COB_ID_used_by_PDO = 0x480; /* 1152 */
UNS8 STM32Encoders_obj1803_Transmission_Type = 0x1; /* 1 */
UNS16 STM32Encoders_obj1803_Inhibit_Time = 0x0; /* 0 */
UNS8 STM32Encoders_obj1803_Compatibility_Entry = 0x0; /* 0 */
UNS16 STM32Encoders_obj1803_Event_Timer = 0x0;  /* 0 */
ODCallback_t STM32Encoders_Index1803_callbacks[] = {
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
};
subindex STM32Encoders_Index1803[] = {
  { RO, uint8, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj1803 },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1803_COB_ID_used_by_PDO },
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_obj1803_Transmission_Type },
  { RW, uint16, sizeof (UNS16), (void*)&STM32Encoders_obj1803_Inhibit_Time },
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_obj1803_Compatibility_Entry },
  { RW, uint16, sizeof (UNS16), (void*)&STM32Encoders_obj1803_Event_Timer }
};

/* index 0x1A00 :   Transmit PDO 1 Mapping. */
UNS8 STM32Encoders_highestSubIndex_obj1A00 = 1; /* number of subindex - 1*/
UNS32 STM32Encoders_obj1A00[] = {
  0x60200120  /* 1612710176 */
};
subindex STM32Encoders_Index1A00[] = {
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj1A00 },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A00[0] }
};

/* index 0x1A01 :   Transmit PDO 2 Mapping. */
UNS8 STM32Encoders_highestSubIndex_obj1A01 = 1; /* number of subindex - 1*/
UNS32 STM32Encoders_obj1A01[] = {
  0x60200120  /* 1612710176 */
};
subindex STM32Encoders_Index1A01[] = {
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj1A01 },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A01[0] }
};

/* index 0x1A02 :   Transmit PDO 3 Mapping. */
UNS8 STM32Encoders_highestSubIndex_obj1A02 = 8; /* number of subindex - 1*/
UNS32 STM32Encoders_obj1A02[] = {
  0x0,  /* 0 */
  0x0,  /* 0 */
  0x0,  /* 0 */
  0x0,  /* 0 */
  0x0,  /* 0 */
  0x0,  /* 0 */
  0x0,  /* 0 */
  0x0 /* 0 */
};
subindex STM32Encoders_Index1A02[] = {
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj1A02 },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A02[0] },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A02[1] },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A02[2] },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A02[3] },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A02[4] },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A02[5] },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A02[6] },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A02[7] }
};

/* index 0x1A03 :   Transmit PDO 4 Mapping. */
UNS8 STM32Encoders_highestSubIndex_obj1A03 = 2; /* number of subindex - 1*/
UNS32 STM32Encoders_obj1A03[] = {
  0x60200120, /* 1612710176 */
  0x60200220  /* 1612710432 */
};
subindex STM32Encoders_Index1A03[] = {
  { RW, uint8, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj1A03 },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A03[0] },
  { RW, uint32, sizeof (UNS32), (void*)&STM32Encoders_obj1A03[1] }
};

/* index 0x6000 :   Mapped variable Operating Parameters */
subindex STM32Encoders_Index6000[] = {
  { RW, uint16, sizeof (UNS16), (void*)&Operating_Parameters }
};

/* index 0x6004 :   Mapped variable Position Value */
subindex STM32Encoders_Index6004[] = {
  { RO, uint32, sizeof (UNS32), (void*)&Position_Value }
};

/* index 0x6020 :   Mapped variable Position Value for Multi-Sensor Device */
UNS8 STM32Encoders_highestSubIndex_obj6020 = 2; /* number of subindex - 1*/
subindex STM32Encoders_Index6020[] = {
  { RO, uint8, sizeof (UNS8), (void*)&STM32Encoders_highestSubIndex_obj6020 },
  { RW, int32, sizeof (INTEGER32), (void*)&Position_Value_for_Multi_Sensor_Device[0] },
  { RW, int32, sizeof (INTEGER32), (void*)&Position_Value_for_Multi_Sensor_Device[1] }
};

/* index 0x6500 :   Mapped variable Operating Status */
subindex STM32Encoders_Index6500[] = {
  { RO, uint16, sizeof (UNS16), (void*)&Operating_Status }
};

/* index 0x6501 :   Mapped variable Single Turn Resolution */
subindex STM32Encoders_Index6501[] = {
  { RO, uint32, sizeof (UNS32), (void*)&Single_Turn_Resolution }
};

/* index 0x6502 :   Mapped variable Number of Distinguishable Revolutions */
subindex STM32Encoders_Index6502[] = {
  { RW, uint16, sizeof (UNS16), (void*)&Number_of_Distinguishable_Revolutions }
};

/* index 0x6510 :   Mapped variable Number of High Precision Revolutions */
subindex STM32Encoders_Index6510[] = {
  { RO, uint40, sizeof (UNS40), (void*)&Number_of_High_Precision_Revolutions }
};

/**************************************************************************/
/* Declaration of pointed variables                                       */
/**************************************************************************/

const indextable STM32Encoders_objdict[] = {
  { (subindex*)STM32Encoders_Index1000, sizeof(STM32Encoders_Index1000) / sizeof(STM32Encoders_Index1000[0]), 0x1000},
  { (subindex*)STM32Encoders_Index1001, sizeof(STM32Encoders_Index1001) / sizeof(STM32Encoders_Index1001[0]), 0x1001},
  { (subindex*)STM32Encoders_Index100C, sizeof(STM32Encoders_Index100C) / sizeof(STM32Encoders_Index100C[0]), 0x100C},
  { (subindex*)STM32Encoders_Index100D, sizeof(STM32Encoders_Index100D) / sizeof(STM32Encoders_Index100D[0]), 0x100D},
  { (subindex*)STM32Encoders_Index1014, sizeof(STM32Encoders_Index1014) / sizeof(STM32Encoders_Index1014[0]), 0x1014},
  { (subindex*)STM32Encoders_Index1018, sizeof(STM32Encoders_Index1018) / sizeof(STM32Encoders_Index1018[0]), 0x1018},
  { (subindex*)STM32Encoders_Index1200, sizeof(STM32Encoders_Index1200) / sizeof(STM32Encoders_Index1200[0]), 0x1200},
  { (subindex*)STM32Encoders_Index1800, sizeof(STM32Encoders_Index1800) / sizeof(STM32Encoders_Index1800[0]), 0x1800},
  { (subindex*)STM32Encoders_Index1801, sizeof(STM32Encoders_Index1801) / sizeof(STM32Encoders_Index1801[0]), 0x1801},
  { (subindex*)STM32Encoders_Index1802, sizeof(STM32Encoders_Index1802) / sizeof(STM32Encoders_Index1802[0]), 0x1802},
  { (subindex*)STM32Encoders_Index1803, sizeof(STM32Encoders_Index1803) / sizeof(STM32Encoders_Index1803[0]), 0x1803},
  { (subindex*)STM32Encoders_Index1A00, sizeof(STM32Encoders_Index1A00) / sizeof(STM32Encoders_Index1A00[0]), 0x1A00},
  { (subindex*)STM32Encoders_Index1A01, sizeof(STM32Encoders_Index1A01) / sizeof(STM32Encoders_Index1A01[0]), 0x1A01},
  { (subindex*)STM32Encoders_Index1A02, sizeof(STM32Encoders_Index1A02) / sizeof(STM32Encoders_Index1A02[0]), 0x1A02},
  { (subindex*)STM32Encoders_Index1A03, sizeof(STM32Encoders_Index1A03) / sizeof(STM32Encoders_Index1A03[0]), 0x1A03},
  { (subindex*)STM32Encoders_Index6000, sizeof(STM32Encoders_Index6000) / sizeof(STM32Encoders_Index6000[0]), 0x6000},
  { (subindex*)STM32Encoders_Index6004, sizeof(STM32Encoders_Index6004) / sizeof(STM32Encoders_Index6004[0]), 0x6004},
  { (subindex*)STM32Encoders_Index6020, sizeof(STM32Encoders_Index6020) / sizeof(STM32Encoders_Index6020[0]), 0x6020},
  { (subindex*)STM32Encoders_Index6500, sizeof(STM32Encoders_Index6500) / sizeof(STM32Encoders_Index6500[0]), 0x6500},
  { (subindex*)STM32Encoders_Index6501, sizeof(STM32Encoders_Index6501) / sizeof(STM32Encoders_Index6501[0]), 0x6501},
  { (subindex*)STM32Encoders_Index6502, sizeof(STM32Encoders_Index6502) / sizeof(STM32Encoders_Index6502[0]), 0x6502},
  { (subindex*)STM32Encoders_Index6510, sizeof(STM32Encoders_Index6510) / sizeof(STM32Encoders_Index6510[0]), 0x6510},
};

const indextable * STM32Encoders_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks)
{
  int i;
  *callbacks = NULL;
  switch (wIndex) {
  case 0x1000: i = 0; break;
  case 0x1001: i = 1; break;
  case 0x100C: i = 2; break;
  case 0x100D: i = 3; break;
  case 0x1014: i = 4; break;
  case 0x1018: i = 5; break;
  case 0x1200: i = 6; break;
  case 0x1800: i = 7; *callbacks = STM32Encoders_Index1800_callbacks; break;
  case 0x1801: i = 8; *callbacks = STM32Encoders_Index1801_callbacks; break;
  case 0x1802: i = 9; *callbacks = STM32Encoders_Index1802_callbacks; break;
  case 0x1803: i = 10; *callbacks = STM32Encoders_Index1803_callbacks; break;
  case 0x1A00: i = 11; break;
  case 0x1A01: i = 12; break;
  case 0x1A02: i = 13; break;
  case 0x1A03: i = 14; break;
  case 0x6000: i = 15; break;
  case 0x6004: i = 16; break;
  case 0x6020: i = 17; break;
  case 0x6500: i = 18; break;
  case 0x6501: i = 19; break;
  case 0x6502: i = 20; break;
  case 0x6510: i = 21; break;
  default:
    *errorCode = OD_NO_SUCH_OBJECT;
    return NULL;
  }
  *errorCode = OD_SUCCESSFUL;
  return &STM32Encoders_objdict[i];
}

/*
 * To count at which received SYNC a PDO must be sent.
 * Even if no pdoTransmit are defined, at least one entry is computed
 * for compilations issues.
 */
s_PDO_status STM32Encoders_PDO_status[4] = {s_PDO_status_Initializer, s_PDO_status_Initializer, s_PDO_status_Initializer, s_PDO_status_Initializer};

const quick_index STM32Encoders_firstIndex = {
  6, /* SDO_SVR */
  0, /* SDO_CLT */
  0, /* PDO_RCV */
  0, /* PDO_RCV_MAP */
  7, /* PDO_TRS */
  11 /* PDO_TRS_MAP */
};

const quick_index STM32Encoders_lastIndex = {
  6, /* SDO_SVR */
  0, /* SDO_CLT */
  0, /* PDO_RCV */
  0, /* PDO_RCV_MAP */
  10, /* PDO_TRS */
  14 /* PDO_TRS_MAP */
};

const UNS16 STM32Encoders_ObjdictSize = sizeof(STM32Encoders_objdict) / sizeof(STM32Encoders_objdict[0]);

CO_Data STM32Encoders_Data = CANOPEN_NODE_DATA_INITIALIZER(STM32Encoders);

