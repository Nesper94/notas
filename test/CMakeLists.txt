cmake_minimum_required(VERSION 3.18)

project(notas_test)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    ${CMAKE_SOURCE_DIR}/course.cpp
    ${CMAKE_SOURCE_DIR}/grades.cpp
    ${CMAKE_SOURCE_DIR}/student.cpp
)

# Tests
enable_testing()

add_executable(student_test student_test.cpp ${SOURCES})
add_executable(course_test course_test.cpp ${SOURCES})

add_test(NAME student_test COMMAND student_test)
add_test(NAME course_test COMMAND course_test)

target_include_directories(student_test PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(course_test PRIVATE ${CMAKE_SOURCE_DIR})
