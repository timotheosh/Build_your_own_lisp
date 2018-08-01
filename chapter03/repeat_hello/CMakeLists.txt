cmake_minimum_required(VERSION 2.8)
project(repeat_hello)
add_executable(repeat_hello src/main.c)
install(TARGETS repeat_hello DESTINATION bin)
