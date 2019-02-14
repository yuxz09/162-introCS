
p4: main.o Menu.o Container.o Character.o Vampire.o Bluemen.o Barbarian.o Harrypotter.o Medusa.o Gameplay.o
	g++ main.o Menu.o Container.o Character.o Vampire.o Bluemen.o Barbarian.o Harrypotter.o Medusa.o Gameplay.o -o p4


main.o:main.cpp
	g++ -c -std=c++11 main.cpp


Menu.o:Menu.cpp Menu.hpp
	g++ -c -std=c++11 Menu.cpp

Container.o:Container.cpp Container.hpp
	g++ -c -std=c++11 Container.cpp

Character.o:Character.cpp Character.hpp
	g++ -c -std=c++11 Character.cpp

Vampire.o:Vampire.cpp Vampire.hpp
	g++ -c -std=c++11 Vampire.cpp

Bluemen.o:Bluemen.cpp Bluemen.cpp
	g++ -c -std=c++11 Bluemen.cpp

Barbarian.o:Barbarian.cpp Barbarian.hpp
	g++ -c -std=c++11 Barbarian.cpp

Harrypotter.o:Harrypotter.cpp Harrypotter.hpp
	g++ -c -std=c++11 Harrypotter.cpp

Medusa.o:Medusa.cpp Medusa.hpp
	g++ -c -std=c++11 Medusa.cpp

Gameplay.o:Gameplay.cpp Gameplay.hpp
	g++ -c -std=c++11 Gameplay.cpp


clean:
	rm *.o p4