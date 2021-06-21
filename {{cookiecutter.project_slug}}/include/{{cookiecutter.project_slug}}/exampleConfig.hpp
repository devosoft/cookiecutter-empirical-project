#pragma once

#include "emp/config/config.hpp"

EMP_BUILD_CONFIG( SampleConfig,
  GROUP(GLOBAL_SETTINGS, "Global settings"),
  VALUE(FIRST_NUMBER, int, 5, "Here's a number (call me maybe)"),
  VALUE(PROBABLITY, double, .55, "Not quite a fair flip"),
  GROUP(OTHER_PARAMETERS, "Miscellaneous settings"),
  VALUE(LUNCH_ORDER, std::string, "ham on five", "What's for lunch today"),
  VALUE(HOLD_MAYO, bool, true, "Whether or not to hold the mayo"),
);