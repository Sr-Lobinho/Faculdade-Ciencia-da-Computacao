main.exe: main.o Produto.o
  g++ -o main.exe main.o Produto.o

main.o: main.cpp
  g++ -c main.cpp

Produto.o: Produto.cpp
  g++ -c Produto.cpp

clean:
  rm *.o
