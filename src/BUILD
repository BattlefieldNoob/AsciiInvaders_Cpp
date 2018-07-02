# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
    name = "game",
    srcs = glob(["GameObjects/*.cpp","GameObjects/GameEntities/*.cpp","GameObjects/GameStates/*.cpp"]),
    hdrs = glob(["GameObjects/*.hpp","GameObjects/GameEntities/*.hpp","GameObjects/GameStates/*.hpp"]),
    visibility=["//visibility:public"],
    deps=["@pdcurses//:pdcurses_win"],
)

exports_files(["main.cpp"])