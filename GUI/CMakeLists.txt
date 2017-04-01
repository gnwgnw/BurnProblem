cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CUDA_SOLVER}/include)
link_directories(${CUDA_SOLVER})

include_directories("../BurnSolver/include")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Charts REQUIRED)

set(CMAKE_AUTOMOC ON)


set(UI_FILES
		ui_main_form.hpp
		ui_burn_problem.hpp)

set(SOURCE_FILES
		main.cpp
		main_window.cpp
		solver.cpp)

add_executable(BurnProblem ${SOURCE_FILES} ${UI_FILES})
target_link_libraries(BurnProblem BurnSolver Qt5::Widgets Qt5::Charts)