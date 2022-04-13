cmake_minimum_required(VERSION 3.18)

project(notas_test)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(student
    student_test.cpp
    ../student.cpp
)

add_executable(course
    course_test.cpp
    ../course.cpp
    ../student.cpp
    ../grades.cpp
)

include_directories(
    PUBLIC ../
)
