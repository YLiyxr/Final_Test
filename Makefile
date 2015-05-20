all: my_stack.o main.o
	gcc my_stack.o main.o -o main

my_stack.o: include/my_stack.h my_stack.c
	gcc -c my_stack.c -o my_stack.o

main.o: include/my_stack.h main.c
	gcc -c main.c -o main.o

clean:
	rm *.o
