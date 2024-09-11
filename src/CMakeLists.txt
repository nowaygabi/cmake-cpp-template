
set(sources
    main.cpp
)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${sources})
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE externals)