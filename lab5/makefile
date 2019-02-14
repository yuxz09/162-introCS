

Lab5: main.o Menu.o Func.o
	g++ main.o Menu.o Func.o -o lab5


main.o:main.cpp
	g++ -c -std=c++11 main.cpp

Menu.o:Menu.cpp Menu.hpp
	g++ -c -std=c++11 Menu.cpp

Func.o:Func.cpp Func.hpp
	g++ -c -std=c++11 Func.cpp

clean:
	rm *.o lab3