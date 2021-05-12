cmake_minimum_required(VERSION 3.2)

project(algorithm)

set(
	SOURCE_FILES
	algorithm.h
	algorithm.cpp
)

add_library(
	${PROJECT_NAME}
	${SOURCE_FILES}
)

target_include_directories(
    ${PROJECT_NAME}
	PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
