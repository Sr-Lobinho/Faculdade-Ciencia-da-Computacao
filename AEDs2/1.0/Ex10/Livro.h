#ifndef LIVRO_H
#define LIVRO_H

#include <string>
using namespace std;

class Livro{
	private:
		string nome;
		string autor;
		int paginas;
		string editora;
	
	public:
		Livro();
		
		void preencher();
		
		void setNome(string nome);
		string getNome();
		
		void setAutor(string autor);
		string getAutor();
		
		void setPaginas(int paginas);
		int getPaginas();
		
		void setEditora(string editora);
		string getEditora();
};

#endif
