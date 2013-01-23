cmake_minimum_required(VERSION 2.6)

project(Eclipse)

#Eclipse header path
include_directories(	${CMAKE_CURRENT_SOURCE_DIR}/dependances/boost
			${CMAKE_CURRENT_SOURCE_DIR}/include)


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
