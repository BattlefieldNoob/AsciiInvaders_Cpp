list(APPEND WIN32_SOURCES
        pdcclip.c
        pdcdisp.c
        pdcgetsc.c
        pdckbd.c
        pdcscrn.c
        pdcsetsc.c
        pdcutil.c)

add_library(WIN32 pdcclip.c
        pdcdisp.c
        pdcgetsc.c
        pdckbd.c
        pdcscrn.c
        pdcsetsc.c
        pdcutil.c)

export(TARGETS WIN32 FILE win32-targets.cmake)