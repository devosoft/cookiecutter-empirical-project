#define CATCH_CONFIG_MAIN

#include "Catch/single_include/catch2/catch.hpp"

#include "{{cookiecutter.project_slug}}/example.h"

TEST_CASE("Test example")
{
  REQUIRE( example() );
}
