cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 11)

if (NOT CUDA_SOLVER)
	message(SEND_ERROR "CudaSolver lib are required")
endif ()

include_directories(${CUDA_SOLVER}/include)
link_directories(${CUDA_SOLVER})

find_package(CUDA REQUIRED)

include_directories(include)
include_directories(${CUDA_INCLUDE_DIRS})


set(CUDA_NVCC_FLAGS ${CUDA_NVCC_FLAGS} -std=c++11)

set(CUDA_SOURCE_FILES
		include/coerced_params.cuh
		burn_solver.cu)

cuda_compile(BurnSolverCuda SHARED ${CUDA_SOURCE_FILES})


set(SOURCE_FILES
		include/burn_solver.hpp
		include/params.hpp
		params.cpp
		include/coerced_params.cuh)

add_library(BurnSolver SHARED ${SOURCE_FILES} ${BurnSolverCuda})
target_link_libraries(BurnSolver CudaSolver ${CUDA_LIBRARIES})