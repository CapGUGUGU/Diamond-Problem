all : Animal.o Bird.o SeaCreature.o main.o Penguin.o
	g++ Animal.o Bird.o SeaCreature.o main.o Penguin.o

all.o : main.o Animal.o Bird.o SeaCreature.o Penguin.o

clean :
	rm a.out *.o

test : Animal.o Bird.o SeaCreature.o test.o
	g++ Animal.o Bird.o SeaCreature.o test.o -o test

main.o : main.cpp Animal.h Bird.h SeaCreature.h
	g++ -c main.cpp -o main.o

test.o : test.cpp Animal.h Bird.h SeaCreature.h
	g++ -c test.cpp -o test.o

Animal.o : Animal.cpp Animal.h
	g++ -c Animal.cpp -o Animal.o

Bird.o : Bird.cpp Bird.h Animal.h
	g++ -c Bird.cpp -o Bird.o

SeaCreature.o : SeaCreature.cpp SeaCreature.h Animal.h
	g++ -c SeaCreature.cpp -o SeaCreature.o

Penguin.o : Penguin.cpp Penguin.h Animal.h Bird.h SeaCreature.h
	g++ -c Penguin.cpp -o Penguin.o