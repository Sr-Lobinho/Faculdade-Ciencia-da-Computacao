main.exe: main.o Livro.o
	g++ -o main.exe main.o Livro.o

main.o: main.cpp
	g++ -c main.cpp

Livro.o: Livro.cpp Livro.h
	g++ -c Livro.cpp

clean:
	rm *.o
