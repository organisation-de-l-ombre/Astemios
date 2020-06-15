project ("AstemiosCore")

# Ajoutez une source à l'exécutable de ce projet.
add_executable ("AstemiosCore"
        "src/main.cpp"
        "src/CommandTest.cpp")

target_link_libraries("AstemiosCore" AstemiosLogger)
target_link_libraries("AstemiosCore" AstemiosCommandManager)

# target_link_libraries("AstemiosCore" sleepy-discord)