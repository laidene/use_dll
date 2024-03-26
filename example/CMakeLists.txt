cmake_minimum_required(VERSION 3.2)

project(use_tools)

file(GLOB_RECURSE files ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)

add_executable(${PROJECT_NAME}  
	${files}
)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/")
include(enable_warning)
target_set_warnings(${PROJECT_NAME} true false)

target_link_libraries(${PROJECT_NAME} PRIVATE
    tools
)
