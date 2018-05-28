cmake_minimum_required(VERSION 2.8)

project(PDCurses)

include_directories(PDCurses-3.6)

add_subdirectory(PDCurses-3.6/pdcurses)
add_subdirectory(PDCurses-3.6//wincon)

add_library(PDCurses ${MAIN_SOURCES})

TARGET_LINK_LIBRARIES(PDCurses WIN32)
export(TARGETS PDCurses FILE pdcurses-targets.cmake)
set(PDCURSES_TARGETS_FILE ${CMAKE_BINARY_DIR}/pdcurses-targets.cmake)
configure_file(PDCurses-3.6/pdcurses-config.cmake.in PDCurses-3.6/pdcurses-config.cmake)
export(PACKAGE PDCurses)