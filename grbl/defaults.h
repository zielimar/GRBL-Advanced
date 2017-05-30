/*
  defaults.h - defaults settings configuration file
  Part of Grbl-Advanced

  Copyright (c) 2012-2016 Sungeun K. Jeon for Gnea Research LLC

  Grbl-Advanced is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl-Advanced is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl-Advanced.  If not, see <http://www.gnu.org/licenses/>.
*/

/* The defaults.h file serves as a central default settings selector for different machine
   types, from DIY CNC mills to CNC conversions of off-the-shelf machines. The settings
   files listed here are supplied by users, so your results may vary. However, this should
   give you a good starting point as you get to know your machine and tweak the settings for
   your nefarious needs.
   NOTE: Ensure one and only one of these DEFAULTS_XXX values is defined in config.h */
#ifndef DEFAULTS_H
#define DEFAULTS_H


#ifdef DEFAULTS_GENERIC
  // Grbl generic default settings. Should work across different machines.
  #define DEFAULT_X_STEPS_PER_MM 			400.0
  #define DEFAULT_Y_STEPS_PER_MM 			400.0
  #define DEFAULT_Z_STEPS_PER_MM 			400.0
  #define DEFAULT_X_MAX_RATE 				600.0 // mm/min
  #define DEFAULT_Y_MAX_RATE 				600.0 // mm/min
  #define DEFAULT_Z_MAX_RATE 				600.0 // mm/min
  #define DEFAULT_X_ACCELERATION 			(10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_Y_ACCELERATION 			(10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_Z_ACCELERATION 			(10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_X_MAX_TRAVEL 				200.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_Y_MAX_TRAVEL 				200.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_Z_MAX_TRAVEL 				200.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_SPINDLE_RPM_MAX 			1000.0 // rpm
  #define DEFAULT_SPINDLE_RPM_MIN 			0.0 // rpm

  #define DEFAULT_SYSTEM_INVERT_MASK		0
  #define DEFAULT_STEPPING_INVERT_MASK 		0
  #define DEFAULT_DIRECTION_INVERT_MASK 	4	// Invert Z-Axis
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME	25 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK 		1 // MPos enabled
  #define DEFAULT_JUNCTION_DEVIATION 		0.01 // mm
  #define DEFAULT_ARC_TOLERANCE 			0.001 // mm
  #define DEFAULT_REPORT_INCHES 			0 // false
  #define DEFAULT_INVERT_ST_ENABLE 			0 // false
  #define DEFAULT_INVERT_LIMIT_PINS 		0 // false
  #define DEFAULT_SOFT_LIMIT_ENABLE 		0 // false
  #define DEFAULT_HARD_LIMIT_ENABLE 		1  // false
  #define DEFAULT_INVERT_PROBE_PIN 			0 // false
  #define DEFAULT_LASER_MODE 				0 // false
  #define DEFAULT_HOMING_ENABLE 			0  // false
  #define DEFAULT_HOMING_DIR_MASK 			0 // move positive dir
  #define DEFAULT_HOMING_FEED_RATE 			50.0 // mm/min
  #define DEFAULT_HOMING_SEEK_RATE 			500.0 // mm/min
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 	250 // msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 			1.0 // mm
#endif

#ifdef DEFAULTS_SHERLINE_5400
  // Description: Sherline 5400 mill with three NEMA 23 Keling  KL23H256-21-8B 185 oz-in stepper motors,
  // driven by three Pololu A4988 stepper drivers with a 30V, 6A power supply at 1.5A per winding.
  #define MICROSTEPS 2
  #define STEPS_PER_REV 200.0
  #define MM_PER_REV (0.050*MM_PER_INCH) // 0.050 inch/rev leadscrew
  #define DEFAULT_X_STEPS_PER_MM (STEPS_PER_REV*MICROSTEPS/MM_PER_REV)
  #define DEFAULT_Y_STEPS_PER_MM (STEPS_PER_REV*MICROSTEPS/MM_PER_REV)
  #define DEFAULT_Z_STEPS_PER_MM (STEPS_PER_REV*MICROSTEPS/MM_PER_REV)
  #define DEFAULT_X_MAX_RATE 635.0 // mm/min (25 ipm)
  #define DEFAULT_Y_MAX_RATE 635.0 // mm/min
  #define DEFAULT_Z_MAX_RATE 635.0 // mm/min
  #define DEFAULT_X_ACCELERATION (50.0*60*60) // 50*60*60 mm/min^2 = 50 mm/sec^2
  #define DEFAULT_Y_ACCELERATION (50.0*60*60) // 50*60*60 mm/min^2 = 50 mm/sec^2
  #define DEFAULT_Z_ACCELERATION (50.0*60*60) // 50*60*60 mm/min^2 = 50 mm/sec^2
  #define DEFAULT_X_MAX_TRAVEL 225.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_Y_MAX_TRAVEL 125.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_Z_MAX_TRAVEL 170.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_SPINDLE_RPM_MAX 2800.0 // rpm
  #define DEFAULT_SPINDLE_RPM_MIN 0.0 // rpm
  #define DEFAULT_STEP_PULSE_MICROSECONDS 10
  #define DEFAULT_STEPPING_INVERT_MASK 0
  #define DEFAULT_DIRECTION_INVERT_MASK ((1<<Y_AXIS)|(1<<Z_AXIS))
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 25 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK 1 // MPos enabled
  #define DEFAULT_JUNCTION_DEVIATION 0.01 // mm
  #define DEFAULT_ARC_TOLERANCE 0.002 // mm
  #define DEFAULT_REPORT_INCHES 0 // true
  #define DEFAULT_INVERT_ST_ENABLE 0 // false
  #define DEFAULT_INVERT_LIMIT_PINS 0 // false
  #define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
  #define DEFAULT_HARD_LIMIT_ENABLE 0  // false
  #define DEFAULT_INVERT_PROBE_PIN 0 // false
  #define DEFAULT_LASER_MODE 0 // false
  #define DEFAULT_HOMING_ENABLE 0  // false
  #define DEFAULT_HOMING_DIR_MASK 0 // move positive dir
  #define DEFAULT_HOMING_FEED_RATE 50.0 // mm/min
  #define DEFAULT_HOMING_SEEK_RATE 635.0 // mm/min
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 1.0 // mm
#endif


#endif // DEFAULTS_H
