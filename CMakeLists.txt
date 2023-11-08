cmake_minimum_required(VERSION 3.22) # Минимальная версия Cmake

project(lab-1-sorting) # Название проекта

set(CMAKE_CXX_STANDARD 11) # Версия стандарта C++

set(SOURCE_EXE src/main.cpp) # Установка переменной со списком исходников для исполняемого файла

add_executable(lab-1-sorting ${SOURCE_EXE}) # Создаие исполняеого файла