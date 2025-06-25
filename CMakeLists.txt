cmake_minimum_required(VERSION 3.10)
project(VulnScanner)

set(CMAKE_CXX_STANDARD 17)

find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIRS} include)

add_executable(VulnScanner
    src/main.cpp
        src/http_client.cpp
        src/scanner.cpp
        src/vuln_tests.cpp

)
target_link_libraries(VulnScanner ${CURL_LIBRARIES})