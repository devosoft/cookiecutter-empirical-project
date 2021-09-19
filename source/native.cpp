//  This file is part of Cookiecutter Empirical Project
//  Copyright (C) Matthew Andres Moreno, 2021.
//  Released under MIT license; see LICENSE

#include <iostream>

#include "emp/base/vector.hpp"

#include "cookiecutter-empirical-project/config_setup.hpp"
#include "cookiecutter-empirical-project/example.hpp"
#include "cookiecutter-empirical-project/ExampleConfig.hpp"

// This is the main function for the NATIVE version of Cookiecutter Empirical Project.

cookiecutter_empirical_project::Config cfg;

int main(int argc, char* argv[])
{ 
  // Set up a configuration panel for native application
  setup_config_native(cfg, argc, argv);
  cfg.Write(std::cout);

  std::cout << "Hello, world!" << "\n";

  return example();
}
