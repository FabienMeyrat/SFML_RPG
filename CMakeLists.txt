cmake_minimum_required(VERSION 3.19)
project(SFML_RPG)

set(CMAKE_CXX_STANDARD 14)
set(SFML_DIR "G:\\Documents\\SFML-2.5.1\\lib\\cmake\\SFML")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(SFML_RPG src/main.cpp src/Game.cpp src/Game.h)
target_link_libraries(SFML_RPG sfml-graphics sfml-audio)