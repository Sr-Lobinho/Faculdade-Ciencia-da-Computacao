#ifndef LIVRO_H
#define LIVRO_H
#include <string>
using namespace std;

class Livro{
private:
	int id;
	string titulo;
	string autor;

public:
	Livro();
	Livro(Livro& outro);

	void copiar(Livro& outro);
	void imprimir();
	void preencher();

	void setID(int id);
	int getID();

	void setTitulo(string titulo);
	string getTitulo();

	void setAutor(string autor);
	string getAutor();

};
#endif /*LIVRO_H*/

