cmake_minimum_required(VERSION 3.15)

project(cmake-cpp-template
    VERSION 0.1.0
    DESCRIPTION "Another super cool project!!!"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Move binaries to the build directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

# This function generate file groups following the directory hierarchy.
# Each source file is grouped based on its directory path.
# Files not in the source list are placed in an "Other Files" group.
function(create_target_directory_groups target_name)
    source_group("Other Files" REGULAR_EXPRESSION ".")
    get_target_property(target_sources "${target_name}" SOURCES)

    foreach(file_name IN LISTS target_sources)
        get_filename_component(dir_name "${file_name}" PATH)
        string(REPLACE "/" "\\" group_name "${dir_name}")
        source_group("${group_name}" FILES "${file_name}")
    endforeach()
endfunction()

add_subdirectory(externals)
add_subdirectory(src)

# Copy directory you want to the binary ones
# file(COPY directory DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")