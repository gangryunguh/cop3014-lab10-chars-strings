cmake_minimum_required(VERSION 3.14)
project(cop3014_lab10_chars_strings)

set(CMAKE_CXX_STANDARD 11)

foreach(file grades american_equities case_converter)
    add_executable(${file}.exe ${file}.cpp)
endforeach()