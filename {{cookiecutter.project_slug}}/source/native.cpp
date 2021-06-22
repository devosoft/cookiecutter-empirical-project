//  This file is part of {{cookiecutter.project_name}}
//  Copyright (C) {{ cookiecutter.full_name }}, {% now 'local', '%Y' %}.
//  Released under {{ cookiecutter.open_source_license }}; see LICENSE

#include <iostream>

#include "emp/base/vector.hpp"

#include "{{cookiecutter.project_slug}}/example.hpp"
#include "{{cookiecutter.project_slug}}/ProjectConfig.hpp"

{{ cookiecutter.project_name.replace(' ', '') }}Config cfg;

// This is the main function for the NATIVE version of {{cookiecutter.project_name}}.

int main(int argc, char* argv[])
{
  std::cout << "Hello, world!" << std::endl;
  
  // Set up a configuration panel for native application
  SetupProjectConfig(cfg, argc, argv);
  cfg.Write(std::cout);

  return example();
}
