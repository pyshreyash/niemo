cmake_minimum_required(VERSION 3.10)
project(NIEMO)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(NIEMO
    main.cpp
    src/tensor.cpp
    src/matmul_op.cpp
    src/relu_op.cpp
)