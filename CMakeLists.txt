cmake_minimum_required (VERSION 2.8)
# 项目信息
project (JProgressBar)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(JProgressBar interface)

add_subdirectory(example)