#include "{{cookiecutter.project_slug}}/example.hpp"
#include "emp/config/ArgManager.hpp"
#include "emp/prefab/ConfigPanel.hpp"
#include "emp/web/UrlParams.hpp"
#include "emp/web/web.hpp"

// Web version (uses URL parameters)
void SetupProjectConfig({{ cookiecutter.project_name.replace(' ', '') }}Config & config) {
  auto specs = emp::ArgManager::make_builtin_specs(&cfg);
  emp::ArgManager am(emp::web::GetUrlParams(), specs);
  am.UseCallbacks();
  if (am.HasUnused())
    std::exit(EXIT_FAILURE);
}

// Native version (uses command line arguments)
void SetupProjectConfig({{ cookiecutter.project_name.replace(' ', '') }}Config & configint argc, char* argv[]) {
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