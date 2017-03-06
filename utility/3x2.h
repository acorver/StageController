// ----------------------------------------------------------------------------
// 3x2.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef STAGE_CONTROLLER_3X2_CONSTANTS_H
#define STAGE_CONTROLLER_3X2_CONSTANTS_H
#include "Constants.h"


#if defined(__MK20DX256__)

namespace stage_controller
{
namespace constants
{
enum{STAGE_CHANNEL_COUNT=2};

extern const size_t pellet_channel;
extern const size_t stage_channels[STAGE_CHANNEL_COUNT];

// Interrupts

// Units

// Properties
// Property values must be long, double, bool, long[], double[], bool[], char[], ConstantString *, (ConstantString *)[]
extern const double steps_per_position_unit_default[step_dir_controller::constants::CHANNEL_COUNT];

extern const double velocity_max_default[step_dir_controller::constants::CHANNEL_COUNT];

extern const double velocity_min_default[step_dir_controller::constants::CHANNEL_COUNT];

extern const double acceleration_max_default[step_dir_controller::constants::CHANNEL_COUNT];

extern const bool left_switch_stop_enabled_default[step_dir_controller::constants::CHANNEL_COUNT];

extern const double home_velocity_default[step_dir_controller::constants::CHANNEL_COUNT];

extern const long current_scale_default[stepper_controller::constants::DRIVER_COUNT];

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif
#endif
