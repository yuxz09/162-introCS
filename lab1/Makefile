
output: lab1Main.o readMatrix.o Determinant.o
	g++ lab1Main.o readMatrix.o Determinant.o -o output


lab1Main.o:lab1Main.cpp
	g++ -c lab1Main.cpp

readMatrix.o:readMatrix.cpp readMatrix.hpp
	g++ -c readMatrix.cpp

Determinant.o:Determinant.cpp Determinant.hpp
	g++ -c Determinant.cpp

clean:
	rm *.o output