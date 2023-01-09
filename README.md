# Shogi

## Introduction
這是最基本版的將棋，可以判別玩家的移動方法是否符合規則，也可以悔棋。

## Compile
gcc -c src/main.c -o build/main.o

gcc -c src/printthemap.c -o build/printthemap.o

gcc -c src/initialize.c -o build/initialize.o

gcc -c src/movechess.c -o build/movechess.o

gcc -c src/check.c -o build/check.o

gcc -c src/stack.c -o build/stack.o

gcc build/movechess.o build/main.o build/check.o build/initialize.o

build/stack.o build/printthemap.o -o bin/main -lm

## Run
./bin/main

## Functions

#### Initialize function
初始化棋盤，將棋子放到棋盤上


#### Check and movechess function
基本規則判斷和移動棋子

#### stack function
悔棋

## Reference
[1]https://www.zendei.com/article/104260.html
