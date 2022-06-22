cmake_minimum_required(VERSION 3.0.0)
project(debugger_test VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(unofficial-sqlite3 CONFIG REQUIRED)

add_executable(debugger_test src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_link_libraries(debugger_test PRIVATE unofficial::sqlite3::sqlite3)
