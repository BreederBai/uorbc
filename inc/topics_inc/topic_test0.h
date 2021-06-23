/* Auto-generated by genmsg_cpp from file /Volumes/SD/Git/PX4/Firmware_fmuv2/Firmware/msg/actuator_armed.msg */


#pragma once

#include <stdint.h>
#ifdef __cplusplus
#include <cstring>
#else
#include <string.h>
#endif

#include "uORB.h"


#ifndef __cplusplus

#endif


#ifdef __cplusplus
struct test0_s {
#else
struct test0_s {
#endif
	uint64_t timestamp; // required for logger
	uint32_t seq;
	bool armed;
	bool prearmed;
	bool ready_to_arm;
	bool lockdown;
	bool manual_lockdown;
	bool force_failsafe;
	bool in_esc_calibration_mode;
	uint8_t _padding0[1]; // required for logger

#ifdef __cplusplus

#endif
};

/* register this as object request broker structure */
ORB_DECLARE(test0);

