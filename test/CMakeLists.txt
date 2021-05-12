cmake_minimum_required(VERSION 3.2)

project(algorithm_test)

set(
	SOURCE_FILES
	algorithm_test.cpp
)

add_executable(
	${PROJECT_NAME}
	${SOURCE_FILES}
)

target_link_libraries(
	${PROJECT_NAME}
	algorithm 
	gtest_main
)
 
target_include_directories(
	${PROJECT_NAME}
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}
)

add_test(
	algorithm_test
	algorithm_test
)
