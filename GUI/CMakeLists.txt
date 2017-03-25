cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CUDA_SOLVER}/include)
link_directories(${CUDA_SOLVER})

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Charts REQUIRED)


set(SOURCE_FILES
		main.cpp
		ui_burn_problem.hpp
		ui_main_form.hpp
		main_window.cpp)

add_executable(BurnProblem ${SOURCE_FILES})
target_link_libraries(BurnProblem BurnSolver Qt5::Widgets Qt5::Charts)