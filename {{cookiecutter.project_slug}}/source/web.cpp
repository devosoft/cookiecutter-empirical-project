//  This file is part of {{cookiecutter.project_name}}
//  Copyright (C) {{ cookiecutter.full_name }}, {% now 'local', '%Y' %}.
//  Released under {{ cookiecutter.open_source_license }}; see LICENSE

#include <iostream>

#include "emp/prefab/ConfigPanel.hpp"
#include "emp/web/TextArea.hpp"
#include "emp/web/web.hpp"

#include "{{cookiecutter.project_slug}}/config_setup.hpp"
#include "{{cookiecutter.project_slug}}/example.hpp"
#include "{{cookiecutter.project_slug}}/ExampleConfig.hpp"

namespace UI = emp::web;

UI::Document doc("emp_base");

{{ cookiecutter.project_slug.replace('-','_') }}::Config cfg;
emp::prefab::ConfigPanel example_config_panel(cfg);

int main()
{
  doc << "<h1>Hello, browser!</h1>";

  // Set up a configuration panel for web application
  setup_config_web(cfg);
  cfg.Write(std::cout);

  example_config_panel.Setup();
  doc << example_config_panel.GetConfigPanelDiv();


  // An example to show how the Config Panel could be used
  // to control the color of text in an HTML text area
  UI::TextArea example_area("example_area");
  example_area.SetSize(cfg.SIZE(), cfg.SIZE());
  example_config_panel.SetOnChangeFun([](const std::string & val){
    UI::TextArea example_area = doc.TextArea("example_area");
    example_area.SetCSS("color", cfg.COLOR());
    example_area.Redraw();
  });
  
  doc << example_area;

  std::cout << "Hello, console!" << "\n";

  return example();
}
