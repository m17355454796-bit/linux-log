process.exe: main.o process.o
	gcc -o process.exe main.o process.o

main.o: main.c process.h
	gcc -c main.c

process.o: process.c process.h
	gcc -c process.c

clean:
	rm -f *.o process.exe
