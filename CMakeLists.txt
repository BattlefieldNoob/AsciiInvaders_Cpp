cmake_minimum_required(VERSION 3.3)
project(SpaceInvadersC++)

file(GLOB_RECURSE SRCS "src/*.cpp")

include(PDCurses-3.6/CMakeLists.txt)

add_executable(SpaceInvadersC++ ${SRCS})
target_link_libraries(SpaceInvadersC++ PDCurses)
