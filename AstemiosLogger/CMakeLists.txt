project ("AstemiosLogger")

add_library(AstemiosLogger
        "src/LoggerManager.cpp"
        "src/formatters/BasicFormatter.cpp"
        "src/formatters/ConsoleColorFormatter.cpp"
        "src/outputs/console/ConsoleLogger.cpp"
        "src/outputs/file/FileLogger.cpp")

add_subdirectory(third-party/termcolor)

target_link_libraries(AstemiosLogger termcolor)

target_include_directories(AstemiosLogger PUBLIC include)