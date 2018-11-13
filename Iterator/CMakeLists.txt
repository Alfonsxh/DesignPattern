aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src sources)

add_executable(Iterator
        main.cpp
        ${sources})