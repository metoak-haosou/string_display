
all:test

test:main.o string_display.o
	gcc main.o string_display.o -o test
main.o:main.c
	gcc -c main.c -o main.o
string_display.o:string_display.c string_display.h
	gcc -c string_display.c -o string_display.o
clean:
	rm -rf test *.o