
lab6: main.o Menu.o Node.o Double_Linkedlist.o 
	g++ main.o Menu.o Node.o Double_Linkedlist.o -o lab6

main.o: main.cpp 
	g++ -c -std=c++11 main.cpp 

Menu.o: Menu.cpp Menu.hpp
	g++ -c -std=c++11 Menu.cpp


Node.o: Node.cpp Node.hpp
	g++ -c -std=c++11 Node.cpp

Double_Linkedlist.o: Double_Linkedlist.cpp Double_Linkedlist.hpp 
	g++ -c -std=c++11 Double_Linkedlist.cpp 

clean:
	rm *.o lab6