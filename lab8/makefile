
Lab8: main.o Search.o Sort.o 
	g++ main.o Search.o Sort.o -o lab8


main.o:main.cpp
	g++ -c -std=c++11 main.cpp


Search.o:Search.cpp Search.hpp
	g++ -c -std=c++11 Search.cpp

Sort.o:Sort.cpp Sort.hpp
	g++ -c -std=c++11 Sort.cpp

clean:
	rm *.o lab8