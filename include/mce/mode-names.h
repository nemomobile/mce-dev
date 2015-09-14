/**
 * @file mode-names.h
 * Defines for names of various modes and submodes for Mode Control Entity
 * <p>
 * This file is part of mce-dev
 * <p>
 * Copyright © 2004-2010 Nokia Corporation and/or its subsidiary(-ies).
 * <p>
 * @author David Weinehall <david.weinehall@nokia.com>
 *
 * These headers are free software; you can redistribute them
 * and/or modify them under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation.
 *
 * These headers are distributed in the hope that they will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with these headers.
 * If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _MCE_MODE_NAMES_H_
#define _MCE_MODE_NAMES_H_

/**
 * Master switch; set - radios enabled, unset - radios disabled
 *
 * @since v1.10.60
 */
#define MCE_RADIO_STATE_MASTER		(1 << 0)
/**
 * Cellular; set - enabled, unset - disabled
 *
 * @since v1.10.60
 */
#define MCE_RADIO_STATE_CELLULAR	(1 << 1)
/**
 * WLAN; set - enabled, unset - disabled
 *
 * @since v1.10.60
 */
#define MCE_RADIO_STATE_WLAN		(1 << 2)
/**
 * Bluetooth; set - enabled, unset - disabled
 *
 * @since v1.10.60
 */
#define MCE_RADIO_STATE_BLUETOOTH	(1 << 3)
/**
 * NFC; set - enabled, unset - disabled
 *
 * @since v1.10.93
 */
#define MCE_RADIO_STATE_NFC		(1 << 4)
/**
 * FM transmitter; set - enabled, unset - disabled
 *
 * @since v1.10.93
 */
#define MCE_RADIO_STATE_FMTX		(1 << 5)

/**
 * No ongoing call
 *
 * @since v1.8.4
 */
#define MCE_CALL_STATE_NONE			"none"
/**
 * Call ringing
 *
 * @since v1.8.29
 */
#define MCE_CALL_STATE_RINGING			"ringing"
/**
 * Call on-going
 *
 * @since v1.8.29
 */
#define MCE_CALL_STATE_ACTIVE			"active"
/**
 * Service operation on-going
 * use to prevent calls from being initiated;
 * will not prevent emergency calls
 *
 * @since v1.8.29
 */
#define MCE_CALL_STATE_SERVICE			"service"

/**
 * Normal call
 *
 * @since v1.8.4
 */
#define MCE_NORMAL_CALL				"normal"
/**
 * Emergency call
 *
 * @since v1.8.4
 */
#define MCE_EMERGENCY_CALL			"emergency"

/**
 * Touchscreen/Keypad locked
 *
 * @since v1.4.5
 */
#define MCE_TK_LOCKED				"locked"
/**
 * Touchscreen/Keypad silently locked
 *
 * @since v1.4.15
 */
#define MCE_TK_SILENT_LOCKED			"silent-locked"
/**
 * Touchscreen/Keypad locked with fadeout
 *
 * @since v1.4.15
 */
#define MCE_TK_LOCKED_DIM			"locked-dim"
/**
 * Touchscreen/Keypad locked with delay
 *
 * @since v1.12.2
 */
#define MCE_TK_LOCKED_DELAY			"locked-delay"
/**
 * Touchscreen/Keypad silently locked with fadeout
 *
 * @since v1.4.15
 */
#define MCE_TK_SILENT_LOCKED_DIM		"silent-locked-dim"
/**
 * Touchscreen/Keypad unlocked
 *
 * @since v1.4.5
 */
#define MCE_TK_UNLOCKED				"unlocked"
/**
 * Touchscreen/Keypad silently unlocked
 *
 * @since v1.6.33
 */
#define MCE_TK_SILENT_UNLOCKED			"silent-unlocked"

/**
 * Display state name for display on
 *
 * @since v1.5.21
 */
#define MCE_DISPLAY_ON_STRING			"on"
/**
 * Display state name for display dim
 *
 * @since v1.5.21
 */
#define MCE_DISPLAY_DIM_STRING			"dimmed"
/**
 * Display state name for display off
 *
 * @since v1.5.21
 */
#define MCE_DISPLAY_OFF_STRING			"off"

/** Blank prevent state name for active
 *
 * @since v1.51.0
 */
#define MCE_PREVENT_BLANK_ACTIVE_STRING		"active"
/** Blank prevent state name for inactive
 *
 * @since v1.51.0
 */
#define MCE_PREVENT_BLANK_INACTIVE_STRING	"inactive"

/** Blank inhibit state name for active
 *
 * @since v1.51.0
 */
#define MCE_INHIBIT_BLANK_ACTIVE_STRING		"active"
/** Blank inhibit state name for inactive
 *
 * @since v1.51.0
 */
#define MCE_INHIBIT_BLANK_INACTIVE_STRING	"inactive"

/** Default blanking policy active
 *
 * @since v1.55.0
 */
#define MCE_BLANKING_POLICY_DEFAULT_STRING      "default"

/** Default blanking policy disabled due to notifications
 *
 * @since v1.55.0
 */
#define MCE_BLANKING_POLICY_NOTIFICATION_STRING "notification"

/** Default blanking policy disabled due to alarm dialog state
 *
 * @since v1.55.0
 */
#define MCE_BLANKING_POLICY_ALARM_STRING        "alarm"

/** Default blanking policy disabled due to call state
 *
 * @since v1.55.0
 */
#define MCE_BLANKING_POLICY_CALL_STRING         "call"

/** Default blanking policy is about to be restored
 *
 * @since v1.55.0
 */
#define MCE_BLANKING_POLICY_LINGER_STRING       "linger"

/**
 * CABC name for CABC disabled
 *
 * @since v1.8.88
 */
#define MCE_CABC_MODE_OFF			"off"
/**
 * CABC name for UI mode
 *
 * @since v1.8.88
 */
#define MCE_CABC_MODE_UI			"ui"
/**
 * CABC name for still image mode
 *
 * @since v1.8.88
 */
#define MCE_CABC_MODE_STILL_IMAGE		"still-image"
/**
 * CABC name for moving image mode
 *
 * @since v1.8.88
 */
#define MCE_CABC_MODE_MOVING_IMAGE		"moving-image"
/**
 * POWERKEY EVENT for single powerkey press
 *
 * @since v1.10.54
 */
#define MCE_POWERKEY_EVENT_SHORT_PRESS        (0u)
/**
 * POWERKEY EVENT for long powerkey press
 *
 * @since v1.10.54
 */
#define MCE_POWERKEY_EVENT_LONG_PRESS         (1u)
/**
 * POWERKEY EVENT for double powerkey press
 *
 * @since v1.10.54
 */
#define MCE_POWERKEY_EVENT_DOUBLE_PRESS       (2u)

#endif /* _MCE_MODE_NAMES_H_ */
