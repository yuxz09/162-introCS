
hw4: main.o Menu.o Person.o Instructor.o Student.o University.o Building.o
	g++ main.o Menu.o Person.o Instructor.o Student.o University.o Building.o -o lab4


main.o:main.cpp
	g++ -c -std=c++11 main.cpp

Menu.o:Menu.cpp Menu.hpp
	g++ -c -std=c++11 Menu.cpp

Person.o:Person.cpp Person.hpp
	g++ -c -std=c++11 Person.cpp

Instructor.o:Instructor.cpp Instructor.hpp
	g++ -c -std=c++11 Instructor.cpp

Student.o:Student.cpp Student.hpp
	g++ -c -std=c++11 Student.cpp

University.o:University.cpp University.hpp
	g++ -c -std=c++11 University.cpp

Building.o:Building.cpp Building.hpp
	g++ -c -std=c++11 Building.cpp

clean:
	rm *.o lab4