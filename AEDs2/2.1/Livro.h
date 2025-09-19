 #ifndef LIVRO_H
 #define LIVRO_H
 
 #include <string>
 using namespace std;
 
 class Livro{
private:
	string isbn;
	string titulo;
	string autor;
	string editora;
	int edicao;
	
public:
	Livro();
	Livro(Livro& outro);
	
	void copiar(Livro& outro);
	void preencher();
	void imprimir();
	
	void setISBN(string isbn);
	string getISBN();
	void setTitulo(string titulo);
	string getTitulo();
	void setAutor(string autor);
	string getAutor();
	void setEditora(string editora);
	string getEditora();
	void setEdicao(int edicao);
	int getEdicao();

 };
 
 
 #endif /*LIVRO_H*/
