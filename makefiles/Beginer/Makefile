#  the # is a comment
#
#  the sytax of a statement is
#  target: dependencies
#  [tab] system command

all: assignment02

assignment02: ifelse.o
	g++ ifelse.o -o assignment02

ifelse.o: 
	g++ -c ifelse.cpp -o ifelse.o

clean:
	rm -f assignment02
	rm -f *.o
