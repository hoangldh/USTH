.PHONY: all clean

all: average

average: average.o average_implementation.o
	gcc -o average.exe average.o average_implementation.o

average.o: average.c average_header.h
	gcc -c average.c -o average.o

average_implementation.o: average_implementation.c average_header.h
	gcc -c average_implementation.c -o average_implementation.o

clean:
	del /F /Q *.o average.exe 2>nul || exit 0