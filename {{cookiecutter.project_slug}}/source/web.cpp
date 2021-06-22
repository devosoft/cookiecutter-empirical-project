//  This file is part of {{cookiecutter.project_name}}
//  Copyright (C) {{ cookiecutter.full_name }}, {% now 'local', '%Y' %}.
//  Released under {{ cookiecutter.open_source_license }}; see LICENSE

#include <iostream>

#include "emp/prefab/ConfigPanel.hpp"
#include "emp/web/web.hpp"
#include "emp/web/TextArea.hpp"

#include "{{cookiecutter.project_slug}}/example.hpp"
#include "{{cookiecutter.project_slug}}/ProjectConfig.hpp"

namespace UI = emp::web;

UI::Document doc("emp_base");

{{ cookiecutter.project_name.replace(' ', '') }}Config cfg;
emp::prefab::ConfigPanel example_config_panel(cfg);
UI::TextArea example_area;

int main()
{
  doc << "<h1>Hello, browser!</h1>";

  // Set up a configuration panel for web application
  SetupProjectConfig(cfg);
  example_config_panel.Setup();
  doc << example_config_panel.GetConfigPanelDiv();

  // An example to show config usage
  example_area.SetSize(cfg.SIZE(), cfg.SIZE());
  example_config_panel.SetOnChangeFun([&](const std::string & val){
    example_area.SetCSS("color", cfg.COLOR());
    example_area.Redraw();
  });

  doc << example_area;

  std::cout << "Hello, console!" << std::endl;

  return example();
}
