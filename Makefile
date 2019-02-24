all: eps_skeleton eps_functions.o
eps_skeleton: eps_skeleton.o eps_functions.o
	g++ eps_skeleton.o  eps_functions.o -o eps_skeleton
eps_skeleton.o: eps_skeleton.cpp
	g++ -c eps_skeleton.cpp
eps_functions.o: eps_functions.cpp eps_functions.h
	g++ -c eps_functions.cpp
clean:
	rm *.o eps_skeleton
