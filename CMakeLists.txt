cmake_minimum_required (VERSION 2.8)
add_definitions("-Wall -pedantic")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -std=c++0x")

project(enCryptor)

add_compile_options(-std=c++0x)

set(sources 
	"main.cpp"
	"src/encrypt.cpp"
	"src/file.cpp"
)

include_directories("../include/" "./include/")

add_executable(${PROJECT_NAME} "include/decrypt.h" "include/encrypt.h" "include/file.h" ${sources})


