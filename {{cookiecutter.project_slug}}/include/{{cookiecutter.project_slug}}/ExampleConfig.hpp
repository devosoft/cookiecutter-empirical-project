#pragma once

#include "emp/config/config.hpp"

namespace {{ cookiecutter.project_slug.replace('-','_') }} {

  EMP_BUILD_CONFIG(Config,
    GROUP(GLOBAL_SETTINGS, "Global settings"),
    VALUE(SEED, int, -1, "Seed for a simulation"),
    VALUE(SIZE, int, 300, "Size of example text area"),
    VALUE(COLOR, std::string, "red", "Text color for example text area"),
    GROUP(OTHER_SETTINGS, "Miscellaneous settings"),
    VALUE(LUNCH_ORDER, std::string, "ham on five", "What's for lunch today"),
    VALUE(HOLD_MAYO, bool, true, "Whether or not to hold the mayo"),
    VALUE(SUPER_SECRET, bool, true, "It's a hidden switch"),
  );
}
