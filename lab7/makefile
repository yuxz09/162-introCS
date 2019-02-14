
lab7: main.o Menu.o Queue.o
	g++ main.o Menu.o Queue.o -o lab7

main.o: main.cpp 
	g++ -c -std=c++11 main.cpp 

Menu.o: Menu.cpp Menu.hpp
	g++ -c -std=c++11 Menu.cpp

Queue.o: Queue.cpp Queue.hpp
	g++ -c -std=c++11 Queue.cpp 

clean:
	rm *.o lab7