cmake_minimum_required(VERSION 3.5)

project(promptTests)

set(CMAKE_CXX_STANDARD 11)
set(project_sources ${CMAKE_CURRENT_SOURCE_DIR}/src/tests.cpp)

include_directories(
  "${CMAKE_CURRENT_SOURCE_DIR}/../src"
  "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_executable(promptTests ${project_sources})

install(TARGETS promptTests RUNTIME DESTINATION bin)
