main.exe: main.o Encadeada.o Nodo.o Livro.o
	g++ -o main.exe main.o Encadeada.o Nodo.o Livro.o

main.o: main.cpp
	g++ -c main.cpp

Encadeada.o: Encadeada.cpp Encadeada.h
	g++ -c Encadeada.cpp

Nodo.o: Nodo.cpp Nodo.h
	g++ -c Nodo.cpp

Livro.o: Livro.cpp Livro.h
	g++ -c Livro.cpp

clean:
	rm *.o