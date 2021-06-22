#pragma once

#include "emp/config/ArgManager.hpp"
#include "emp/prefab/ConfigPanel.hpp"
#include "emp/web/UrlParams.hpp"
#include "emp/web/web.hpp"

#include "{{cookiecutter.project_slug}}/ProjectConfig.hpp"

void SetupProjectConfig({{ cookiecutter.project_name.replace(' ', '') }}Config & config)  {
  auto specs = emp::ArgManager::make_builtin_specs(&cfg);
  emp::ArgManager am(emp::web::GetUrlParams(), specs);
  am.UseCallbacks();
  if (am.HasUnused())
    std::exit(EXIT_FAILURE);
}

void SetupProjectConfig({{ cookiecutter.project_name.replace(' ', '') }}Config & config, int argc, char* argv[]) {
  auto specs = emp::ArgManager::make_builtin_specs(&cfg);
  emp::ArgManager am(argc, argv, specs);
  am.UseCallbacks();
  if (am.HasUnused())
    std::exit(EXIT_FAILURE);
}

bool example() {
  std::cout << "example thing!" << std::endl;
  return true;
}
