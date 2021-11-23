cmake_minimum_required(VERSION 3.15)

project(
  TestStage
  VERSION 1.0
  LANGUAGES CXX)

include(cmake/GetPybind11.cmake)
get_pybind11(VERSION 2.8.1)

# Create the python module
pybind11_add_module(m src/m.cpp SYSTEM)

# Use C++17 since the tests are using std::optional etc.
set_target_properties(m PROPERTIES CXX_STANDARD_REQUIRED ON
                                   CXX_EXTENSIONS OFF
                                   CXX_STANDARD 17)
