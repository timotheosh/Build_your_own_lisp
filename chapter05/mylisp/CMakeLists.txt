cmake_minimum_required(VERSION 3.5)

project(mylisp)

set(project_sources ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/mpc.c)
add_subdirectory(tests)

set(cflags "-std=c99 -Wall")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${cflags}")
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${cflags}")

add_executable(mylisp ${project_sources})
target_link_libraries(mylisp edit m)

install(TARGETS mylisp RUNTIME DESTINATION bin)
