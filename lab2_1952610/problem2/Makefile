all: problem21 problem22
problem21: pi_serial.o
	gcc pi_serial.o -o problem21 -pthread
pi_serial.o: pi_serial.c
	gcc -c pi_serial.c
problem22: pi_multi-thread.o
	gcc pi_multi-thread.o -o problem22 -pthread
pi_multi-thread: pi_multi-thread.c
	gcc -c pi_multi-thread.c
