cmake_minimum_required(VERSION 3.16)
project(Laba1 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")

add_executable(laba1_app 
    src/main.cpp 
    src/func.cpp
)

target_include_directories(laba1_app PRIVATE include)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)
add_executable(laba1_tests 
    tests/test_laba1.cpp 
    src/func.cpp
)

target_include_directories(laba1_tests PRIVATE include)
target_link_libraries(laba1_tests gtest_main)

enable_testing()
add_test(NAME Laba1Tests COMMAND laba1_tests)

add_custom_target(build-all
    DEPENDS laba1_app laba1_tests
    COMMENT "Building all targets"
)