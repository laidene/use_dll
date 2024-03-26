cmake_minimum_required(VERSION 3.2)

project(tools)

file(GLOB_RECURSE files ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")

add_library(${PROJECT_NAME} SHARED
	${files}
)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/")
include(enable_warning)
target_set_warnings(${PROJECT_NAME} true false)

target_compile_definitions(${PROJECT_NAME} PRIVATE 
	LIB_TOOLS_EXPOETS
)

install(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION bin
	ARCHIVE DESTINATION lib
)

