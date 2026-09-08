CXX= clang++
CXXFLAGS= -Wall -Wextra -pedantic -std=c++17 -I./vendor/raylib
SRC= ./src/main.cpp
LIBS= -L./vendor/raylib -lraylib
OUT= ./build/engine


compile:
	@$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC) $(LIBS)


run: compile
	@$(OUT)
