all: Adder

Adder: main.o add.o
	gcc -o Adder main.o add.o

main.o: main.c add.h
	gcc -c -o main.o main.c

add.o: add.c add.h
	gcc -c -o add.o add.c

clean:
	rm *.o
