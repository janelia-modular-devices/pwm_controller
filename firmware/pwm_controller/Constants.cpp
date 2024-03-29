// ----------------------------------------------------------------------------
// Constants.cpp
//
//
// Authors:
// Peter Polidoro peter@polidoro.io
// ----------------------------------------------------------------------------
#include "Constants.h"


namespace constants
{
const size_t baudrate = 9600;

const size_t model_number = 1110;

// Use semantic versioning http://semver.org/
const long firmware_major = 0;
const long firmware_minor = 1;
const long firmware_patch = 0;

const size_t servo_duty_cycle_min = 241;
const size_t servo_duty_cycle_max = 450;
const size_t servo_pwm_frequency = 60;

// const size_t cs_pin = 46;
// const size_t reset_pin = 44;
// const size_t in_pin = 45;

// const uint8_t channels_per_ic_count = 8;
// const uint8_t ic_count = 4;
// const uint8_t channel_count = channels_per_ic_count*ic_count;

// const uint8_t channel_min = 0;
// const uint8_t channel_max = channel_count - 1;

// const uint32_t duration_min = 1;
// const uint32_t duration_max = 0x7FFFFFFF;

// const float frequency_min = 0.00001;
// const float frequency_max = 500.0;

// const uint8_t duty_cycle_min = 0;
// const uint8_t duty_cycle_max = 100;

CONSTANT_STRING(device_name,"pwm_controller");

// CONSTANT_STRING(duration_units_name,"ms");
// CONSTANT_STRING(frequency_units_name,"Hz");

// Fields
// CONSTANT_STRING(states_field_name,"states");
// const long states_array_default[STATE_COUNT] = {0};

// Parameters
// CONSTANT_STRING(channels_parameter_name,"channels");
// CONSTANT_STRING(channel_parameter_name,"channel");
// CONSTANT_STRING(state_parameter_name,"state");
// CONSTANT_STRING(delay_parameter_name,"delay");
// CONSTANT_STRING(on_duration_parameter_name,"on_duration");
// CONSTANT_STRING(period_parameter_name,"period");
// CONSTANT_STRING(count_parameter_name,"count");
// CONSTANT_STRING(frequency_parameter_name,"frequency");
CONSTANT_STRING(channel_parameter_name,"channel");
const uint8_t channel_min = 0;
const uint8_t channel_max = 15;

CONSTANT_STRING(servo_position_parameter_name,"servo_position");
CONSTANT_STRING(servo_position_units_name,"%");
const uint8_t servo_position_min = 0;
const uint8_t servo_position_max = 100;

// CONSTANT_STRING(pwm_duration_parameter_name,"pwm_duration");
// CONSTANT_STRING(spike_duty_cycle_parameter_name,"spike_duty_cycle");
// CONSTANT_STRING(spike_duration_parameter_name,"spike_duration");
// CONSTANT_STRING(hold_duty_cycle_parameter_name,"hold_duty_cycle");
// CONSTANT_STRING(hold_duration_parameter_name,"hold_duration");
// CONSTANT_STRING(pulse_wave_index_parameter_name,"pulse_wave_index");

// Methods
CONSTANT_STRING(set_servo_position_method_name,"setServoPosition");
// CONSTANT_STRING(set_channel_on_method_name,"setChannelOn");
// CONSTANT_STRING(set_channel_off_method_name,"setChannelOff");
// CONSTANT_STRING(set_channels_on_method_name,"setChannelsOn");
// CONSTANT_STRING(set_channels_off_method_name,"setChannelsOff");
// CONSTANT_STRING(toggle_channel_method_name,"toggleChannel");
// CONSTANT_STRING(toggle_channels_method_name,"toggleChannels");
// CONSTANT_STRING(toggle_all_channels_method_name,"toggleAllChannels");
// CONSTANT_STRING(set_all_channels_on_method_name,"setAllChannelsOn");
// CONSTANT_STRING(set_all_channels_off_method_name,"setAllChannelsOff");
// CONSTANT_STRING(set_channel_on_all_others_off_method_name,"setChannelOnAllOthersOff");
// CONSTANT_STRING(set_channel_off_all_others_on_method_name,"setChannelOffAllOthersOn");
// CONSTANT_STRING(set_channels_on_all_others_off_method_name,"setChannelsOnAllOthersOff");
// CONSTANT_STRING(set_channels_off_all_others_on_method_name,"setChannelsOffAllOthersOn");
// CONSTANT_STRING(get_channels_on_method_name,"getChannelsOn");
// CONSTANT_STRING(get_channels_off_method_name,"getChannelsOff");
// CONSTANT_STRING(get_channel_count_method_name,"getChannelCount");
// CONSTANT_STRING(save_state_method_name,"saveState");
// CONSTANT_STRING(recall_state_method_name,"recallState");
// CONSTANT_STRING(add_pulse_centered_method_name,"addPulseCentered");
// CONSTANT_STRING(add_pwm_period_on_duration_method_name,"addPwmPeriodOnDuration");
// CONSTANT_STRING(add_pwm_frequency_duty_cycle_method_name,"addPwmFrequencyDutyCycle");
// CONSTANT_STRING(add_spike_and_hold_method_name,"addSpikeAndHold");
// CONSTANT_STRING(stop_all_pulses_method_name,"stopAllPulses");
// CONSTANT_STRING(start_pwm_period_on_duration_method_name,"startPwmPeriodOnDuration");
// CONSTANT_STRING(start_pwm_frequency_duty_cycle_method_name,"startPwmFrequencyDutyCycle");
// CONSTANT_STRING(start_spike_and_hold_method_name,"startSpikeAndHold");
// CONSTANT_STRING(stop_pulse_wave_method_name,"stopPulseWave");

// Errors

}
