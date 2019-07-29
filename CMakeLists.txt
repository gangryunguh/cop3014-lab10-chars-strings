cmake_minimum_required(VERSION 3.10)
project(cop3014_lab10_chars_strings)

set(CMAKE_CXX_STANDARD 11)

foreach(file grades american_equities case_converter lab10-1 lab10-2 lab10-3 lab10-4 lab10-5)
    add_executable(${file}.exe ${file}.cpp)
endforeach()