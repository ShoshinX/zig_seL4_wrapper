

# Use add_subdirectory() in the outer scope
cmake_minimum_required(VERSION 3.7.2)
project(zig_seL4_wrapper C)

file(GLOB deps src/*.c)

add_library(zig_seL4_wrapper ${deps})

target_include_directories(zig_seL4_wrapper
    PUBLIC
        include
)

target_link_libraries(zig_seL4_wrapper sel4 sel4platsupport)
