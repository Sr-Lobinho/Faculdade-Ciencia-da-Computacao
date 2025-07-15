#include <iostream>
using namespace std;

struct Livro{
	string titulo;
	string autor;
	int ano;
	
	void preencheLivro(int inst){
		cout << "Livro " << inst << ": " << endl;
		cout << "Informe o titulo do livro: ";
		cin >> titulo;
		cout << "Informe o nome do autor: ";
		cin >> autor;
		cout << "Informe o ano de publicacao: ";
		cin >> ano;
		cout << endl;
	}
	
	void imprimeLivro(int inst){
		cout << "Livro " << inst << ": " << endl;
		cout << "Titulo: " << titulo << endl;
		cout << "Autor: " << autor << endl;
		cout << "Ano de publicacao: " << ano << endl;
	}
	
};

int main(){
	Livro L1;
	L1.preencheLivro(1);
	L1.imprimeLivro(1);
	return 0;
}
