cmake_minimum_required(VERSION 4.0)
project(
	base	
	LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 		23)
set(CMAKE_CXX_STANDARD_REQUIRED	YES)
set(CMAKE_CXX_EXTENSIONS	OFF)

set(BASE_SRC
	${PROJECT_SOURCE_DIR}/src/maths/vec2.cxx
)

if(MSVC)
	add_compile_options(/W4 /std:c++23preview)
else()
	add_compile_options(-Wall -Wextra -Wpedantic -std=c++23)
endif()

add_library(${PROJECT_NAME} SHARED ${BASE_SRC})
add_library(layer::base ALIAS ${PROJECT_NAME})

target_include_directories(
	${PROJECT_NAME}
	PUBLIC	
	${PROJECT_SOURCE_DIR}/include	
)

if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
	target_link_libraries(
		${PROJECT_NAME}
		PRIVATE
		stdc++exp
	)
endif()
