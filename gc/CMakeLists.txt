cmake_minimum_required(VERSION 3.13)
project(gc C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
add_executable(gc
        ../libft/ft_gc.c ../libft/ft_gc.h)
