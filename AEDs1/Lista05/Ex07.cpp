#include <iostream>
using namespace std;

struct TimeFutebol{
	string nome;
	string cidade;
	int titulos;
	
	void preencheTime(){
		cout << "Informe o nome do time: ";
		cin >> nome;
		cout << "Informe de qual cidade e o time: ";
		cin >> cidade;
		cout << "Informe quantos titulos o time tem: ";
		cin >> titulos;
		cout << endl;
	}
	
	void imprimeTime(){
		cout << "Nome: " << nome << endl;
		cout << "Cidade: " << cidade << endl;
		cout << "Quantidade de titulos: " << titulos << endl;
	}	
};

int main(){
	TimeFutebol T1;
	T1.preencheTime();
	T1.imprimeTime();
	return 0;
}
