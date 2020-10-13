/*
   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * DEFINES
 ****************************************************************************************
 */

#define HRPS_HT_MEAS_MAX_LEN            (13)

#define HRPS_MANDATORY_MASK             (0x0F)
#define HRPS_BODY_SENSOR_LOC_MASK       (0x30)
#define HRPS_HR_CTNL_PT_MASK            (0xC0)


///Attributes State Machine
enum
{
    CUSTOM_IDX_SVC,

    CUSTOM_IDX_READ_CHAR,
	CUSTOM_IDX_READ_DATA,
	CUSTOM_DATA_IDX_CHARACTOR_PRESENT_FORMAT,
    CUSTOM_IDX_WRITE_CHAR,
    CUSTOM_IDX_WRITE_DATA,

    CUSTOM_IDX_NB,
};

#define ESP_GATT_CPF_FORMAT_UINT32 0x08
#define ESP_GATT_CPF_FORMAT_UTF8S 0x19

