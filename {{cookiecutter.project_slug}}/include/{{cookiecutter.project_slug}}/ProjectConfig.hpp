#pragma once

#include "emp/config/config.hpp"

EMP_BUILD_CONFIG( {{ cookiecutter.project_name.replace(' ', '') }}Config,
  GROUP(GLOBAL_SETTINGS, "Global settings"),
  VALUE(LINES, int, 3, "Lines for example text area"),
  VALUE(HEIGHT, double, .5, "Opacity of example text area"),
  VALUE(COLOR, std::string, "red", "Text color for example text area"),
  GROUP(OTHER_PARAMETERS, "Miscellaneous settings"),
  VALUE(LUNCH_ORDER, std::string, "ham on five", "What's for lunch today"),
  VALUE(HOLD_MAYO, bool, true, "Whether or not to hold the mayo"),
);
