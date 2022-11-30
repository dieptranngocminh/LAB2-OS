problem1: main.o ex1.o
	gcc main.c ex1.c -o problem1
main.o: main.c ex1.h
	gcc -c main.c
ex1.o: ex1.c ex1.h
	gcc -c ex1.c
