
output: main.o Zoo.o Menu.o Animal.o Tiger.o Penguin.o Turtle.o 
	g++ main.o Zoo.o Menu.o Animal.o Tiger.o Penguin.o Turtle.o  -o p2


main.o:main.cpp
	g++ -c -std=c++11 main.cpp

Zoo.o:Zoo.cpp Zoo.hpp
	g++ -c -std=c++11 Zoo.cpp

Menu.o:Menu.cpp Menu.hpp
	g++ -c -std=c++11 Menu.cpp

Animal.o:Animal.cpp Animal.hpp
	g++ -c -std=c++11 Animal.cpp

Tiger.o:Tiger.cpp Tiger.hpp
	g++ -c -std=c++11 Tiger.cpp

Penguin.o:Penguin.cpp Penguin.hpp
	g++ -c -std=c++11 Penguin.cpp

Turtle.o:Turtle.cpp Turtle.hpp
	g++ -c -std=c++11 Turtle.cpp

clean:
	rm *.o p2