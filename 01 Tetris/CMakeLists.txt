
cmake_policy(SET CMP0074 NEW)
cmake_minimum_required(VERSION 3.12)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../cmake")

set(SFML_ROOT "C:\\Program Files (x86)\\SFML-2.5.1") 
find_package(SFML COMPONENTS graphics window system)
include_directories(${SFML_INCLUDE_DIR})

add_executable(tetris main.cpp GameClock.cpp TetrisGame.cpp)
target_link_libraries(tetris ${SFML_LIBRARIES})
##SET CMP0074
##SET TETRIS DIE
##list SET POLICY
##SET(VAR value)