cmake_minimum_required(VERSION 4.0)
project(
	cpp-win-template	
	VERSION 0.1.0
	LANGUAGES C CXX
)

# General C++ Version flags

set(CMAKE_CXX_STANDARD 		23)
set(CMAKE_CXX_STANDARD_REQUIRED	YES)
set(CMAKE_CXX_EXTENSIONS	OFF)

# Binary directory

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Source files

set(NR_SRC
	${PROJECT_SOURCE_DIR}/src/main.cxx
)

# Result executable

add_executable(${PROJECT_NAME} ${NR_SRC})

# Base C++ Layer (layer::base)

add_subdirectory(base)

target_include_directories(
	${PROJECT_NAME}
	PRIVATE
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/base/include # layer::base
)

target_link_libraries(
	${PROJECT_NAME}
	PRIVATE
	layer::base
	SDL3::SDL3
	imgui
)

# vendor

add_subdirectory(vendor)
