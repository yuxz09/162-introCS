

output: LanAnt.o Menu.o Board.o Ant.o
	g++ LanAnt.o Menu.o Board.o Ant.o -o output


LanAnt.o:LanAnt.cpp
	g++ -c -std=c++11 LanAnt.cpp

Menu.o:Menu.cpp Menu.hpp
	g++ -c -std=c++11 Menu.cpp

Board.o:Board.cpp Board.hpp
	g++ -c -std=c++11 Board.cpp

Ant.o:Ant.cpp Ant.hpp
	g++ -c -std=c++11 Ant.cpp	

clean:
	rm *.o output