aux_source_directory(. Srcs)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

add_executable(Iterator ${Srcs})