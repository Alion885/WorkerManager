cmake_minimum_required(VERSION 3.14)
project(WorkerManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(WorkerManager main/main.cpp class/WorkerManager.cpp header/WorkerManager.h header/Worker.h class/Employee.cpp header/Employee.h header/Manager.h class/Manager.cpp header/Boss.h class/Boss.cpp)