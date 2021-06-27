f8 : main.o Listas.o Stack.o
	gcc -o f8 main.o Listas.o Stack.o

Listas.o : Listas.c Listas.h
	gcc -c Listas.c

Stack.o : Stack.c Stack.h Listas.h
	gcc -c Stack.c

main.c : Stack:h main.c Listas.h
	gcc -c main.c