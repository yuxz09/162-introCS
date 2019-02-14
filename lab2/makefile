

output: Lab2.o countLetters.o outputLetters.o
	g++ Lab2.o countLetters.o outputLetters.o -o lab2


Lab2.o:Lab2.cpp
	g++ -c -std=c++11 Lab2.cpp

countLetters.o:countLetters.cpp countLetters.hpp
	g++ -c -std=c++11 countLetters.cpp

outputLetters.o:outputLetters.cpp outputLetters.hpp
	g++ -c -std=c++11 outputLetters.cpp


clean:
	rm *.o lab2