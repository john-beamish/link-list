main: main.o linklist.o
	g++ -c -std=c++11 main.cpp
	g++ -o main -std=c++11 main.o linklist.o
main.o: main.cpp
	g++ -c -std=c++11 linklist.h
	g++ -c -std=c++11 linklist.cpp
clean:
	-rm *.o
	-rm *.h.gch
