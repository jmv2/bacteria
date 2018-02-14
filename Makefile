all: bacteria

bacteria: main.o procedures.o
	gcc main.o procedures.o -o bacteria -g

main.o: main.c headers.h
	gcc -c main.c

procedures.o: procedures.c headers.h
	gcc -c procedures.c

clean:
	rm -f *.o bacteria

run:
	./bacteria