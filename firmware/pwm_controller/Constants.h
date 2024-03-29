// ----------------------------------------------------------------------------
// Constants.h
//
//
// Authors:
// Peter Polidoro peter@polidoro.io
// ----------------------------------------------------------------------------
#ifndef CONSTANTS_H
#define CONSTANTS_H
#include "ConstantVariable.h"


namespace constants
{
//MAX values must be >= 1, >= created/copied count, < RAM limit
enum{FIELD_COUNT_MAX=1};
enum{PARAMETER_COUNT_MAX=2};
enum{METHOD_COUNT_MAX=1};

// enum {STATE_COUNT=16};
// enum {INDEXED_CHANNELS_COUNT_MAX=8};
// enum {INDEXED_PULSES_COUNT_MAX=4};

extern const size_t baudrate;

extern const size_t model_number;

extern const long firmware_major;
extern const long firmware_minor;
extern const long firmware_patch;

extern const size_t servo_duty_cycle_min;
extern const size_t servo_duty_cycle_max;
extern const size_t servo_pwm_frequency;

// extern const size_t cs_pin;
// extern const size_t reset_pin;
// extern const size_t in_pin;

// extern const uint8_t channels_per_ic_count;
// extern const uint8_t ic_count;
// extern const uint8_t channel_count;

// extern const uint8_t channel_min;
// extern const uint8_t channel_max;

// extern const uint32_t duration_min;
// extern const uint32_t duration_max;

// extern const float frequency_min;
// extern const float frequency_max;

// extern const uint8_t duty_cycle_min;
// extern const uint8_t duty_cycle_max;

extern ConstantString device_name;

// extern ConstantString duration_units_name;
// extern ConstantString frequency_units_name;

// Fields
// Field values must be long, double, bool, long[], double[], bool[], char[], ConstantString *
// extern ConstantString states_field_name;
// extern const long states_array_default[STATE_COUNT];

// Parameters
// extern ConstantString channels_parameter_name;
// extern ConstantString channel_parameter_name;
// extern ConstantString state_parameter_name;
// extern ConstantString delay_parameter_name;
// extern ConstantString on_duration_parameter_name;
// extern ConstantString period_parameter_name;
// extern ConstantString count_parameter_name;
// extern ConstantString frequency_parameter_name;

extern ConstantString channel_parameter_name;
extern const uint8_t channel_min;
extern const uint8_t channel_max;

extern ConstantString servo_position_parameter_name;
extern ConstantString servo_position_units_name;
extern const uint8_t servo_position_min;
extern const uint8_t servo_position_max;

// extern ConstantString pwm_duration_parameter_name;
// extern ConstantString spike_duty_cycle_parameter_name;
// extern ConstantString spike_duration_parameter_name;
// extern ConstantString hold_duty_cycle_parameter_name;
// extern ConstantString hold_duration_parameter_name;
// extern ConstantString pulse_wave_index_parameter_name;

// Methods
extern ConstantString set_servo_position_method_name;
// extern ConstantString set_channel_on_method_name;
// extern ConstantString set_channel_off_method_name;
// extern ConstantString set_channels_on_method_name;
// extern ConstantString set_channels_off_method_name;
// extern ConstantString toggle_channel_method_name;
// extern ConstantString toggle_channels_method_name;
// extern ConstantString toggle_all_channels_method_name;
// extern ConstantString set_all_channels_on_method_name;
// extern ConstantString set_all_channels_off_method_name;
// extern ConstantString set_channel_on_all_others_off_method_name;
// extern ConstantString set_channel_off_all_others_on_method_name;
// extern ConstantString set_channels_on_all_others_off_method_name;
// extern ConstantString set_channels_off_all_others_on_method_name;
// extern ConstantString get_channels_on_method_name;
// extern ConstantString get_channels_off_method_name;
// extern ConstantString get_channel_count_method_name;
// extern ConstantString save_state_method_name;
// extern ConstantString recall_state_method_name;
// extern ConstantString add_pulse_centered_method_name;
// extern ConstantString add_pwm_period_on_duration_method_name;
// extern ConstantString add_pwm_frequency_duty_cycle_method_name;
// extern ConstantString add_spike_and_hold_method_name;
// extern ConstantString stop_all_pulses_method_name;
// extern ConstantString start_pwm_period_on_duration_method_name;
// extern ConstantString start_pwm_frequency_duty_cycle_method_name;
// extern ConstantString start_spike_and_hold_method_name;
// extern ConstantString stop_pulse_wave_method_name;

// Errors

}
#endif
