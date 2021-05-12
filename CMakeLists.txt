
PROJECT(platform)

set(CMAKE_CXX_STANDARD 20)

cmake_minimum_required(VERSION 3.0)

enable_testing()

set(
	gtest_force_shared_crt ON CACHE BOOL "always use mdd" FORCE
)

add_subdirectory(
	algorithm
)

add_subdirectory(
	googletest
)

add_subdirectory(
	test
)

add_executable(
	platform
	main.cpp
)

# set(
	# CTEST_PROGRESS_OUTPUT
	# ON
# )


# -- timeout 1000
# set_tests_properties(
# 	algorithm_test
# 	PROPERTIES
# 	TIMEOUT 1000
# )
