cmake_minimum_required(VERSION 3.14)
project(workspace)
#set(CMAKE_CXX_STANDARD 14)
file(GLOB SOURCE
        "src/*"
        "clases/*"
        )

add_executable(workspace ${SOURCE})
