#pragma once

#include <filesystem>

#include "emp/config/ArgManager.hpp"
#include "emp/prefab/ConfigPanel.hpp"
#include "emp/web/UrlParams.hpp"
#include "emp/web/web.hpp"

#include "{{cookiecutter.project_slug}}/ProjectConfig.hpp"

void SetupProjectConfig({{ cookiecutter.project_name.replace(' ', '') }}Config & config)  {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(emp::web::GetUrlParams(), specs);
  AddExistingConfig(am);
}

void SetupProjectConfig({{ cookiecutter.project_name.replace(' ', '') }}Config & config, int argc, char* argv[]) {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(argc, argv, specs);
  AddExistingConfig(am);
}

void AddExistingConfig(emp::ArgManager & am) {
  if(std::filesystem::exists("{{cookiecutter.project_slug}}.cfg")) {
    std::cout << "Configuration read from {{cookiecutter.project_slug}}.cfg" << "\n";
    config.Read("{{cookiecutter.project_slug}}.cfg");
  }
  am.UseCallbacks();
  if (am.HasUnused())
    std::exit(EXIT_FAILURE);
}

bool example() {
  std::cout << "example thing!" << std::endl;
  return true;
}
