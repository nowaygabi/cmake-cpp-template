add_subdirectory(your_cool_library)

add_library(externals INTERFACE)

target_link_libraries(externals INTERFACE cool)

# Suppress warnings from external libraries
if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    add_compile_options(/W0)
endif()