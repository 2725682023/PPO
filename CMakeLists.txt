cmake_minimum_required(VERSION 3.25)
project(PPO)

set(CMAKE_CXX_STANDARD 17)

add_executable(PPO main.cpp ui.cpp ui.h Osoba.cpp Osoba.h Pracownik.cpp Pracownik.h Student.cpp Student.h Identifiable.h osoby.cpp osoby.h)
