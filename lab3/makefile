

GAME: Lab3.o Menu.o Die.o LoadedDie.o Game.o
	g++ Lab3.o Menu.o Die.o LoadedDie.o Game.o -o lab3


Lab3.o:Lab3.cpp
	g++ -c -std=c++11 Lab3.cpp

Menu.o:Menu.cpp Menu.hpp
	g++ -c -std=c++11 Menu.cpp

Die.o:Die.cpp Die.hpp
	g++ -c -std=c++11 Die.cpp

LoadedDie.o:LoadedDie.cpp LoadedDie.hpp
	g++ -c -std=c++11 LoadedDie.cpp

Game.o:Game.cpp Game.hpp
	g++ -c -std=c++11 Game.cpp

clean:
	rm *.o lab3