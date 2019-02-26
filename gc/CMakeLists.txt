cmake_minimum_required(VERSION 3.13)
project(gc C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS  '${CMAKE_C_FLAGS} -fsanitize=address')
include_directories(.)
add_executable(gc
        ../libft/ft_gc.c ../libft/ft_gc.h)
