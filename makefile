all: prog

prog: lab2.o contact.o
	g++ lab2.o contact.o -o prog

lab2.o: lab2.cpp
	g++ -c lab2.cpp

contact.o: contact.cpp contact.hpp
	g++ -c contact.cpp

clean:
	rm *o prog


