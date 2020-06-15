project("AstemiosCommandManager")

add_library(AstemiosCommandManager
        "src/CommandManager.cpp"
        "src/base/Command.cpp")

target_link_libraries(AstemiosCommandManager AstemiosLogger)
target_include_directories(AstemiosCommandManager PUBLIC include)