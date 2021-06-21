//  This file is part of {{cookiecutter.project_name}}
//  Copyright (C) {{ cookiecutter.full_name }}, {% now 'local', '%Y' %}.
//  Released under {{ cookiecutter.open_source_license }}; see LICENSE

#include <iostream>

#include "emp/web/web.hpp"

#include "{{cookiecutter.project_slug}}/example.hpp"
#include "{{cookiecutter.project_slug}}/exampleConfig.hpp"
#include "emp/config/command_line.hpp"
#include "emp/config/ArgManager.hpp"
#include "emp/prefab/ConfigPanel.hpp"
#include "emp/web/UrlParams.hpp"

namespace UI = emp::web;

UI::Document doc("emp_base");

Config cfg;
emp::prefab::ConfigPanel example_config_panel(cfg);

int main()
{
  doc << "<h1>Hello, browser!</h1>";

  // Set up a configuration panel and add it to the document
  auto specs = emp::ArgManager::make_builtin_specs(&cfg);
  emp::ArgManager am(emp::web::GetUrlParams(), specs);
  am.UseCallbacks();
  if (am.HasUnused())
    std::exit(EXIT_FAILURE);
  example_config_panel.Setup();
  doc << example_config_panel.GetConfigPanelDiv();

  

  std::cout << "Hello, console!" << std::endl;

  return example();
}
