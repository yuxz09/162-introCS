
p3: main.o Gameplay.o Menu.o Character.o Barbarian.o Bluemen.o Harrypotter.o Medusa.o Vampire.o
	g++ main.o Gameplay.o Menu.o Character.o Barbarian.o Bluemen.o Harrypotter.o Medusa.o Vampire.o -o p3

main.o: main.cpp 
	g++ -c -std=c++11 main.cpp 

Gameplay.o: Gameplay.cpp Gameplay.hpp
	g++ -c -std=c++11 Gameplay.cpp


Menu.o: Menu.cpp Menu.hpp
	g++ -c -std=c++11 Menu.cpp

Character.o: Character.cpp Character.hpp 
	g++ -c -std=c++11 Character.cpp 

Barbarian.o: Barbarian.cpp Barbarian.hpp 
	g++ -c -std=c++11 Barbarian.cpp 

Bluemen.o: Bluemen.cpp Bluemen.hpp 
	g++ -c -std=c++11 Bluemen.cpp 

Harrypotter.o: Harrypotter.cpp Harrypotter.hpp 
	g++ -c -std=c++11 Harrypotter.cpp 

Medusa.o: Medusa.cpp Medusa.hpp 
	g++ -c -std=c++11 Medusa.cpp 

Vampire.o: Vampire.cpp Vampire.hpp 
	g++ -c -std=c++11 Vampire.cpp 


clean:
	rm *.o p3