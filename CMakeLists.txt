# CMakeList.txt : projet CMake pour Logger, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)
project("Astemios")

add_subdirectory(AstemiosLogger)
add_subdirectory(AstemiosCommandManager)
add_subdirectory(AstemiosCore)