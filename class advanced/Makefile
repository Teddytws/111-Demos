

all: calc


calc: main.o am.o simpleMath.o
	g++ main.o am.o simpleMath.o -o calc


main.o:	am.h simpleMath.h
	g++ -c main.cpp


am.o: am.h
	g++ -c am.cpp


simpleMath.o: simpleMath.h
	g++ -c simpleMath.cpp

clean:
	rm *.o
	rm calc
	rm a.out






