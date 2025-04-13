cmake_minimum_required(VERSION 3.16)
project(kato)

set(CMAKE_CXX_STANDDARD 17)
set(CMAKE_CXX_STANDDARD_REQUIRED True)

add_executable(
  kato
  src/main.cpp
  src/funciones.cpp
)
