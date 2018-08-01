cmake_minimum_required(VERSION 3.5)

project(prompt)

set(project_sources ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c)
add_subdirectory(tests)

add_executable(prompt ${project_sources})
target_link_libraries(prompt readline)

install(TARGETS prompt RUNTIME DESTINATION bin)
