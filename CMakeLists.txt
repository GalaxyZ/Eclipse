cmake_minimum_required(VERSION 2.6)

project(Eclipse)

set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

file(
		GLOB_RECURSE
		source_files
		sources/*
)

add_executable(
		Eclipse
		${source_files}
)
