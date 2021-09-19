#pragma once

#include <filesystem>

#include "emp/config/ArgManager.hpp"
#include "emp/prefab/ConfigPanel.hpp"
#include "emp/web/UrlParams.hpp"
#include "emp/web/web.hpp"

#include "cookiecutter-empirical-project/ExampleConfig.hpp"

void use_existing_config_file(cookiecutter_empirical_project::Config & config, emp::ArgManager & am) {
  if(std::filesystem::exists("cookiecutter-empirical-project.cfg")) {
    std::cout << "Configuration read from cookiecutter-empirical-project.cfg" << "\n";
    config.Read("cookiecutter-empirical-project.cfg");
  }
  am.UseCallbacks();
  if (am.HasUnused())
    std::exit(EXIT_FAILURE);
}

void setup_config_web(cookiecutter_empirical_project::Config & config)  {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(emp::web::GetUrlParams(), specs);
  use_existing_config_file(config, am);
}

void setup_config_native(cookiecutter_empirical_project::Config & config, int argc, char* argv[]) {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(argc, argv, specs);
  use_existing_config_file(config, am);
}

