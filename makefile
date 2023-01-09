build = $(wildcard build/*.o)

.PHONY: main

main: main.o printthemap.o initialize.o movechess.o check.o stack.o
	gcc $(build) -o bin/main -lm

main.o:
	gcc -c src/main.c -o build/main.o

printthemap.o:
	gcc -c src/printthemap.c -o build/printthemap.o

initialize.o:
	gcc -c src/initialize.c -o build/initialize.o

movechess.o:
	gcc -c src/movechess.c -o build/movechess.o

check.o:
	gcc -c src/check.c -o build/check.o

stack.o:
	gcc -c src/stack.c -o build/stack.o

