cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(UnityExample VERSION 1.0 LANGUAGES C)

file(
    GLOB
    UTILS_SOURCE_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c"
)

set( 
    UTILS_INCLUDE_DIRS
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

file(
    GLOB
    UNITY_SOURCE_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/CMock/vendor/unity/src/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/CMock/vendor/unity/extras/fixture/src/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/CMock/vendor/unity/extras/memory/src/*.c"
)

set( 
    UNITY_INCLUDE_DIRS
    "${CMAKE_CURRENT_SOURCE_DIR}/CMock/vendor/unity/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/CMock/vendor/unity/extras/fixture/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/CMock/vendor/unity/extras/memory/src"
)

file(
    GLOB
    TEST_SOURCE_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/test/*.c"
)

set( TEST_INCLUDE_DIRS
     "${CMAKE_CURRENT_SOURCE_DIR}/test" )

message(
    STATUS
    "UTILS_SOURCE_FILES: ${UTILS_SOURCE_FILES}"
)

message(
    STATUS
    "UTILS_INCLUDE_DIRS: ${UTILS_INCLUDE_DIRS}"
)

message(
    STATUS
    "UNITY_SOURCE_FILES: ${UNITY_SOURCE_FILES}"
)

message(
    STATUS
    "UNITY_INCLUDE_DIRS: ${UNITY_INCLUDE_DIRS}"
)

message(
    STATUS
    "UNITY_SOURCE_FILES: ${UNITY_SOURCE_FILES}"
)

message(
    STATUS
    "TEST_INCLUDE_DIRS: ${TEST_INCLUDE_DIRS}"
)

add_executable(
    UnityExample
    ${UTILS_SOURCE_FILES}
    ${UNITY_SOURCE_FILES}
    ${TEST_SOURCE_FILES}
)

target_include_directories(
    UnityExample
    PUBLIC
    ${UTILS_INCLUDE_DIRS}
    ${UNITY_INCLUDE_DIRS}
    ${TEST_INCLUDE_DIRS}
)
