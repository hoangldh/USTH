all: Poot

Poot: simple_poot.c simple_poot_lib.o
	gcc -o Poot simple_poot.c simple_poot_lib.o

simple_poot_lib.o: simple_poot_lib.h simple_poot_lib.c
	gcc -c simple_poot_lib.c -o simple_poot_lib.o