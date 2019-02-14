lab9: main.o Menu.o
	g++ main.o Menu.o -o lab9


main.o:main.cpp
	g++ -c -std=c++11 main.cpp

Menu.o:Menu.cpp Menu.hpp
	g++ -c -std=c++11 Menu.cpp

clean:
	rm *.o lab9