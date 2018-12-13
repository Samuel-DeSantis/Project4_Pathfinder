project4: project4.o exceptions.o
	g++ -o project4 project4.o exceptions.o

project4.o: exceptions.h stack.h project4.cc
	g++ -c project4.cc

exceptions.o: exceptions.h exceptions.cc
	g++ -c exceptions.cc

