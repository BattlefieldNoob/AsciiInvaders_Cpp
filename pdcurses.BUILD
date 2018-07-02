cc_library(
    name = "pdcurses",
    srcs = glob(["pdcurses/*.c"]),
    hdrs = glob(["pdcurses/*.h"]),
    includes = ["pdcurses"],
    visibility=["//visibility:public"],
)

cc_library(
    name = "pdcurses_win",
    srcs = glob(["wincon/*.c"]),
    hdrs = glob(["wincon/*.h","\*.h"]),
    deps = ["//:pdcurses"],
    visibility=["//visibility:public"],
    linkopts=["-DEFAULTLIB:user32.lib","-DEFAULTLIB:advapi32.lib"]
)
