# top-level CMakeLists.txt

cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(gqcp-link LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)

# Find gqcp and link a test executable
set(CMAKE_MODULE_PATH "${GQCP_PREFIX_PATH}/cmake/;${GQCP_INSTALL_PREFIX}/cmake")
find_package(gqcp REQUIRED)

add_executable(test_driver test_driver.cpp)
target_link_libraries(test_driver PUBLIC GQCP::gqcp)
