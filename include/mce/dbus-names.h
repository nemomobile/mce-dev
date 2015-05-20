/**
 * @file dbus-names.h
 * D-Bus Interface to the Mode Control Entity
 * <p>
 * This file is part of mce-dev
 * <p>
 * Copyright © 2004-2011 Nokia Corporation and/or its subsidiary(-ies).
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
#ifndef _MCE_DBUS_NAMES_H_
#define _MCE_DBUS_NAMES_H_

/**
 * @name D-Bus Daemon
 */

/*@{*/

/**
 * MCE D-Bus service
 *
 * @since v0.3
 */
#define MCE_SERVICE			"com.nokia.mce"

/**
 * MCE D-Bus Request interface
 *
 * @since v0.3
 */
#define MCE_REQUEST_IF			"com.nokia.mce.request"
/**
 * MCE D-Bus Signal interface
 *
 * @since v0.3
 */
#define MCE_SIGNAL_IF			"com.nokia.mce.signal"
/**
 * MCE D-Bus Request path
 *
 * @since v0.3
 */
#define MCE_REQUEST_PATH		"/com/nokia/mce/request"
/**
 * MCE D-Bus Signal path
 *
 * @since v0.3
 */
#define MCE_SIGNAL_PATH			"/com/nokia/mce/signal"

/**
 * The MCE D-Bus error interface; currently not used
 *
 * @since v0.3
 */
#define MCE_ERROR_FATAL			"com.nokia.mce.error.fatal"
/**
 * The D-Bus interface for invalid arguments; currently not used
 *
 * @since v0.3
 */
#define MCE_ERROR_INVALID_ARGS		"org.freedesktop.DBus.Error.InvalidArgs"

/*@}*/

/**
 * @name Generic D-Bus methods
 */

/*@{*/

/**
 * Query radio states
 *
 * @since v1.10.60
 * @return @c dbus_uint32_t Radio states or:ed together
 *         (see @ref mce/mode-names.h for defines for the radio states)
 */
#define MCE_RADIO_STATES_GET		"get_radio_states"

/**
 * Query the call state
 *
 * @since v1.8.1
 * @return @c gchar @c * with the new call state
 *             (see @ref mce/mode-names.h for valid call states)
 * @return @c gchar @c * with the new emergency state type
 *             (see @ref mce/mode-names.h for valid emergency state types)
 */
#define MCE_CALL_STATE_GET		"get_call_state"

/**
 * Query the touchscreen/keypad lock mode
 *
 * @since v1.4.0
 * @return @c gchar @c * with the touchscreen/keypad lock mode
 *         (see @ref mce/mode-names.h for valid lock modes)
 */
#define MCE_TKLOCK_MODE_GET		"get_tklock_mode"

/**
 * Query the display status
 *
 * @since v1.5.21
 * @return @c gchar @c * with the display state
 *         (see @ref mce/mode-names.h for valid display states)
 */
#define MCE_DISPLAY_STATUS_GET		"get_display_status"

/**
 * Query CABC mode
 *
 * @since v1.10.0
 * @return @c gchar @c * with the CABC mode
 *         (see @ref mce/mode-names.h for valid CABC modes)
 */
#define MCE_CABC_MODE_GET		"get_cabc_mode"

/**
 * Query the automatic power saving mode
 *
 * @since v1.10.44
 * @return @c dbus_bool_t @c TRUE if automatic power saving mode is active,
 *                        @c FALSE if automatic power saving mode is inactive
 */
#define MCE_PSM_STATE_GET		"get_psm_state"

/**
 * Query key backlight state
 *
 * @since v1.10.30
 * @return @c dbus_bool_t @c TRUE if the key backlight is on,
 *                        @c FALSE if the key backlight is off
 */
#define MCE_KEY_BACKLIGHT_STATE_GET	"get_key_backlight_state"

/**
 * Add an activity notification callback;
 * the next user activity will trigger this callback
 * callbacks are one-shot -- once the callback has been invoked,
 * it will be unregistered
 *
 * @since 1.10.106
 * @param service @c gchar @c * The method call service
 * @param path @c gchar @c * The method call path
 * @param interface @c gchar @c * The method call interface
 * @param name @c gchar @c * The name of the method to call
 * @return @c dbus_bool_t @c TRUE if registration was successful,
 *                        @c FALSE if registration was a failure
 *                           (too many registered clients)
 */
#define MCE_ADD_ACTIVITY_CALLBACK_REQ	"add_activity_callback"

/**
 * Remove any activity notification callback belonging to the calling process
 *
 * @since 1.10.106
 */
#define MCE_REMOVE_ACTIVITY_CALLBACK_REQ	"remove_activity_callback"

/**
 * Query the inactivity status
 *
 * @since v1.5.2
 * @return @c dbus_bool_t @c TRUE if the system is inactive,
 *                        @c FALSE if the system is active
 */
#define MCE_INACTIVITY_STATUS_GET	"get_inactivity_status"

/**
 * Query the current color profile id
 *
 * @since v1.11.2
 * @return @c gchar @c * with the the current profile id
 */
#define MCE_COLOR_PROFILE_GET		"get_color_profile"

/**
 * Query the list of the available color profile ids
 *
 * @since v1.11.2
 * @return @c gchar @c ** with the nul-terminated array of the color profile ids
 */
#define MCE_COLOR_PROFILE_IDS_GET		"get_color_profile_ids"

/**
 * Query the MCE version
 *
 * @since v1.1.6
 * @return @c gchar @c * with the MCE version
 */
#define MCE_VERSION_GET			"get_version"

/**
 * Request radio states change
 *
 * @since v1.10.60
 * @credential mce::DeviceModeControl
 * @param @c dbus_uint32_t New radio states or:ed together
 *        (see @ref mce/mode-names.h for defines for the radio states)
 * @param @c dbus_uint32_t Mask for radio states or:ed together
 *        (see @ref mce/mode-names.h for defines for the radio states)
 */
#define MCE_RADIO_STATES_CHANGE_REQ	"req_radio_states_change"

/**
 * Request call state change
 * Changes can only be made to/from the "none" state; all other
 * transitions will be vetoed.  This is to avoid race conditions
 * between different services.
 *
 * An exception is made when the tuple is active:emergency;
 * such requests are always accepted
 *
 * If the service that requests the transition emits a NameOwnerChanged,
 * then the call state will revert back to "none", to ensure that
 * crashing applications doesn't cause a forever busy call state
 *
 * @since v1.8.1
 * @credential mce::CallStateControl
 * @param call_state @c gchar @c * with the new call state
 *             (see @ref mce/mode-names.h for valid call states)
 * @param call_type @c gchar @c * with the new call type
 *             (see @ref mce/mode-names.h for valid call types)
 * @return @c dbus_bool_t @c TRUE if the new call state was accepted,
 *                        @c FALSE if the new call state was vetoed
 */
#define MCE_CALL_STATE_CHANGE_REQ	"req_call_state_change"

/**
 * Unblank display
 *
 * @since v0.5
 */
#define MCE_DISPLAY_ON_REQ		"req_display_state_on"

/**
 * Dim display
 *
 * @since v1.6.20
 */
#define MCE_DISPLAY_DIM_REQ		"req_display_state_dim"

/**
 * Blank display
 *
 * @since v1.6.20
 */
#define MCE_DISPLAY_OFF_REQ		"req_display_state_off"

/** Set display to low power mode
 *
 * Low power mode is a display off sub state. From normal
 * display state signaling point of view it behaves just as
 * display off would. Depending on available hw support and
 * configuration extra ipc relevant for home screen / system
 * ui only might happen.
 *
 * @since v1.33.0
 */
#define MCE_DISPLAY_LPM_REQ             "req_display_state_lpm"

/**
 * Prevent display from blanking
 *
 * @since v0.5
 */
#define MCE_PREVENT_BLANK_REQ		"req_display_blanking_pause"

/**
 * Cancel display blanking prevention
 *
 * @since v1.10.35
 */
#define MCE_CANCEL_PREVENT_BLANK_REQ	"req_display_cancel_blanking_pause"

/** Get current blank prevention status
 *
 * @since 1.51.0
 *
 * @return @c gchar @c * with the blanking pause state
 *         (see @ref mce/mode-names.h for valid blanking pause states)
 */
#define MCE_PREVENT_BLANK_GET		"get_display_blanking_pause"

/** Get current blank inhibition status
 *
 * @since 1.51.0
 *
 * @return @c gchar @c * with the blanking inhibit state
 *         (see @ref mce/mode-names.h for valid blanking inhibit states)
 */
#define MCE_BLANKING_INHIBIT_GET	"get_display_blanking_inhibit"

/**
 * Request CABC mode change
 *
 * @since v1.10.0
 * @param mode @c gchar @c * with the new CABC mode
 *             (see @ref mce/mode-names.h for valid CABC modes)
 * @return @c gchar @c * with the updated CABC mode
 *             (see @ref mce/mode-names.h for valid CABC modes)
 */
#define MCE_CABC_MODE_REQ		"req_cabc_mode"

/**
 * Request tklock mode change
 *
 * @since v1.4.0
 * @credential mce::TKLockControl
 * @param mode @c gchar @c * with the new touchscreen/keypad lock mode
 *             (see @ref mce/mode-names.h for valid lock modes)
 */
#define MCE_TKLOCK_MODE_CHANGE_REQ	"req_tklock_mode_change"

/**
 * Request powerkey event triggering
 *
 * @credential mce::DeviceModeControl
 * @since v1.5.3
 * @param type @c dbus_bool_t with the type of powerkey event to
 *                trigger; @c FALSE == short powerkey press,
 *                         @c TRUE == long powerkey press
 * @since v1.10.54
 * @param type @c dbus_uint32_t with the type of powerkey event to
 *                trigger; @c 0 == short powerkey press,
 *                         @c 1 == long powerkey press,
 *                         @c 2 == double powerkey press
 */
#define MCE_TRIGGER_POWERKEY_EVENT_REQ	"req_trigger_powerkey_event"

/**
 * Request color profile change
 *
 * @since v1.11.2
 * @credential mce::ColorProfileControl
 * @param mode @c gchar @c * with the new color profile id
 *             (see @ref MCE_COLOR_PROFILE_IDS_GET to learn
 *              how to get the valid color profile ids)
 */
#define MCE_COLOR_PROFILE_CHANGE_REQ	"req_color_profile_change"

/** Query the length of time late suspend can be blocked
 *
 * The idea is: if some process needs to do non-interactive
 * background processing, it can prevent the system from
 * entering late suspend by
 *
 * 1) get timer period via #MCE_CPU_KEEPALIVE_PERIOD_REQ call
 *
 * 2) call #MCE_CPU_KEEPALIVE_START_REQ
 *
 * 3) repeat #MCE_CPU_KEEPALIVE_START_REQ calls in interval
 *    that is shorter than the maximum obtained at (1)
 *
 * 4) call #MCE_CPU_KEEPALIVE_STOP_REQ when finished
 *
 * MCE keeps track of active clients and blocks late suspend
 * until all clients have called #MCE_CPU_KEEPALIVE_STOP_REQ,
 * lost D-Bus connection (exit, crash, ...) or all timeouts
 * have been missed.
 *
 * @since v1.12.8
 *
 * @since v1.23.7
 *
 * An unique within process tracking id can be passed to all
 * cpu keepalive related D-Bus method calls. This allows mce
 * to keep track of multiple, possibly overlapping keepalive
 * periods from one process.
 *
 * Old code that does not pass the tracking id still works
 * as long as the client process does not have multiple
 * overlapping periods at once.
 *
 * @param context Tracking id as DBUS_TYPE_STRING
 *
 * @return period in seconds as DBUS_TYPE_INT32
 */
#define MCE_CPU_KEEPALIVE_PERIOD_REQ	"req_cpu_keepalive_period"

/** Temporarily disable enter late suspend policy
 *
 * This method call must be repeated periodically to keep
 * the system from entering late suspend.
 *
 * The period length can be obtained via #MCE_CPU_KEEPALIVE_PERIOD_REQ.
 *
 * Note: The boolean reply message is optional and will be sent
 *       only if requested.
 *
 * @since v1.12.8
 *
 * @param context Tracking id as DBUS_TYPE_STRING
 *
 * @return success as DBUS_TYPE_BOOLEAN
 */
#define MCE_CPU_KEEPALIVE_START_REQ	"req_cpu_keepalive_start"

/** Allow normal enter late suspend policy again
 *
 * If a process blocks late suspend via #MCE_CPU_KEEPALIVE_START_REQ,
 * it must call #MCE_CPU_KEEPALIVE_STOP_REQ when background processing
 * is finished to enable normal late suspend policy again.
 *
 * Note: The boolean reply message is optional and will be sent
 *       only if requested.
 *
 * @since v1.12.8
 *
 * @param context Tracking id as DBUS_TYPE_STRING
 *
 * @return success as DBUS_TYPE_BOOLEAN
 */
#define MCE_CPU_KEEPALIVE_STOP_REQ	"req_cpu_keepalive_stop"

/** Signal wakeup from suspend due to aligned timer triggering
 *
 * NOTE: This is reserved for use from dsme iphb module and is
 * used to transfer ownership of rtc irq wakeup wakelock from
 * dsme to mce.
 *
 * Note: The boolean reply message is optional and will be sent
 *       only if requested.
 *
 * @since v1.12.8
 *
 * @return success as DBUS_TYPE_BOOLEAN
 */
#define MCE_CPU_KEEPALIVE_WAKEUP_REQ	"req_cpu_keepalive_wakeup"

/** Query configuration value
 *
 * @since v1.12.15
 *
 * @param key Configuration value name as DBUS_TYPE_STRING
 *
 * @return Configuration value as DBUS_TYPE_VARIANT, or
 *         error reply
 */
#define MCE_CONFIG_GET	"get_config"

/** Set configuration value
 *
 * @since v1.12.15
 *
 * @param key Configuration value name as DBUS_TYPE_STRING
 * @param val Configuration value as DBUS_TYPE_VARIANT
 *
 * @return Success as DBUS_TYPE_BOOLEAN, or error reply
 */
#define MCE_CONFIG_SET	"set_config"

/** Reset configuration values to default
 *
 * All config settings with keyname that matches the given substring
 * will be reset to configured defaults e.g. using "/" resets all
 * settings while using "/display/" resets only display related values.
 *
 * @since v1.42.0
 *
 * @param keyish Substring of config value name as DBUS_TYPE_STRING
 *
 * @return Number of changed settings as DBUS_TYPE_INT32; -1 on failure
 */
#define MCE_CONFIG_RESET "reset_config"
/*@}*/

/**
 * @name Generic D-Bus signals
 */

/*@{*/

/**
 * Signal that indicates that the touchscreen/keypad lock mode has changed
 *
 * @since v1.4.0
 * @return @c gchar @c * with the new touchscreen/keypad lock mode
 *         (see @ref mce/mode-names.h for valid lock modes)
 */
#define MCE_TKLOCK_MODE_SIG		"tklock_mode_ind"

/**
 * Notify everyone that the display is on/dimmed/off
 *
 * @since v1.5.21
 * @return @c gchar @c * with the display state
 *         (see @ref mce/mode-names.h for valid display states)
 */
#define MCE_DISPLAY_SIG			"display_status_ind"

/** Notify everyone whether the display blanking is paused
 *
 * @since v1.51.0
 *
 * @return @c gchar @c * with the blanking pause state
 *         (see @ref mce/mode-names.h for valid blanking pause states)
 */
#define MCE_PREVENT_BLANK_SIG		"display_blanking_pause_ind"

/** Notify everyone whether the display blanking is inhibited
 *
 * @since v1.51.0
 *
 * @return @c gchar @c * with the display baling inhibit state
 *         (see @ref mce/mode-names.h for valid blanking inhibit states)
 */
#define MCE_BLANKING_INHIBIT_SIG	"display_blanking_inhibit_ind"

/**
 * Notify everyone that the state of the automatic power saving mode changed
 *
 * @since v1.10.44
 * @return @c dbus_bool_t @c TRUE if automatic power saving mode is active,
 *                        @c FALSE if automatic power saving mode is inactive
 */
#define MCE_PSM_STATE_SIG		"psm_state_ind"

/**
 * Notify everyone that the system is active/inactive
 *
 * @since v0.9.3
 * @return @c dbus_bool_t @c TRUE if the system is inactive,
 *                        @c FALSE if the system is active
 */
#define MCE_INACTIVITY_SIG		"system_inactivity_ind"

/**
 * Notify everyone that the color profile has changed
 *
 * @since v1.11.2
 * @return @c gchar @c * with the color profile id
 */
#define MCE_COLOR_PROFILE_SIG		"color_profile_ind"

/**
 * Notify everyone that the radio states have changed
 *
 * @since v1.10.60
 * @return @c dbus_uint32_t Radio states or:ed together
 *         (see @ref mce/mode-names.h for defines for the radio states)
 */
#define MCE_RADIO_STATES_SIG		"radio_states_ind"

/**
 * Notify everyone that the call state has changed
 *
 * @since v1.8.1
 * @return @c gchar @c * with the new call state
 *             (see @ref mce/mode-names.h for valid call states)
 * @return @c gchar @c * with the new emergency state type
 *             (see @ref mce/mode-names.h for valid emergency state types)
 */
#define MCE_CALL_STATE_SIG		"sig_call_state_ind"

/** Notify everyone that mce configuration value has changed
 *
 * @since v1.14.1
 *
 * @param key Config value name as DBUS_TYPE_STRING
 * @param val Config value as DBUS_TYPE_VARIANT
 */
#define MCE_CONFIG_CHANGE_SIG		"config_change_ind"


/*@}*/

/**
 * @name LED interface D-Bus methods
 */

/*@{*/

/**
 * Activates a pre-defined LED pattern
 *
 * Non-existing patterns are ignored
 *
 * See also: MCE_LED_PATTERN_ACTIVATED_SIG
 *
 * @credential mce::LEDControl
 * @since v1.5.0
 * @param pattern @c gchar @c * with the pattern name
 *                (see @c /etc/mce/mce.ini for valid pattern names)
 */
#define MCE_ACTIVATE_LED_PATTERN	"req_led_pattern_activate"

/**
 * Deactivates a pre-defined LED pattern
 *
 * Non-existing patterns are ignored
 *
 * See also: MCE_LED_PATTERN_DEACTIVATED_SIG
 *
 * @credential mce::LEDControl
 * @since v1.5.0
 * @param pattern @c gchar @c * with the pattern name
 *                (see @c /etc/mce/mce.ini for valid pattern names)
 */
#define MCE_DEACTIVATE_LED_PATTERN	"req_led_pattern_deactivate"

/** Notify everyone that a led pattern has been activated
 *
 * @since v1.25.0
 * @return @c gchar @c * led pattern name
 */
#define MCE_LED_PATTERN_ACTIVATED_SIG   "led_pattern_activated_ind"

/** Notify everyone that a led pattern has been deactivated
 *
 * @since v1.25.0
 * @return @c gchar @c * led pattern name
 */
#define MCE_LED_PATTERN_DEACTIVATED_SIG "led_pattern_deactivated_ind"

/**
 * Enable LED; this does not affect the LED pattern stack
 * Note: The GConf setting for LED flashing overrides this value
 *       If the pattern stack does not contain any active patterns,
 *       the LED logic will still remain in enabled mode,
 *       but will not display any patterns until a pattern is activated
 *
 *       Do NOT use this as a "master switch" for the LED framework,
 *       since some patterns should *always* be visible
 *       this interface is meant for testing and development only
 *
 * @credential mce::LEDControl
 * @since v1.5.0
 */
#define MCE_ENABLE_LED			"req_led_enable"

/**
 * Disable LED; this does not affect the LED pattern stack
 * Note: Do NOT use this as a "master switch" for the LED framework,
 *       since some patterns should *always* be visible
 *       this interface is meant for testing and development only
 *
 * @credential mce::LEDControl
 * @since v1.5.0
 */
#define MCE_DISABLE_LED			"req_led_disable"

/*@}*/

#endif /* _MCE_DBUS_NAMES_H_ */
