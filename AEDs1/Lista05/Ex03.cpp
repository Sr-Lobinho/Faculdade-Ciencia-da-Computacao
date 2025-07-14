#include <isotream>
using namespace std;

struct Aluno{
	int matricula;
	string nome;
	float *notas;
	int tamnotas;
	void preencheNotas(int inst){
		cout << "Informe quantas notas deseja cadastrar: ";
		cin >> tamnotas;
		notas = new float[tamnotas];
		cout << "Aluno " << inst <<  " :" << endl;
		for (int i = 0; i < tamnotas; i++){
			do{
				cout << "Informe a nota "<< i+1 << ": ";
				cin >> notas[i];
				if(notas[i] < 0 or notas[i] > 10){
					cout << "\033[31mNota Invalida!\033[m" << endl;
				}
			}while(notas[i] < 0 or notas[i] > 10);
		}
	}
	void calculaMedia(int inst){
		float media = 0;
		for (int i = 0; i < tamnotas; i++){
			media += notas[i];
		}
		media /= tamnotas;
		cout << "Media aluno " << inst << ": " << media << endl;	
	}	
};

int main(){
	Aluno aluno1;
	aluno1.preencheNotas(1);
	aluno1.calculaMedia(1);
	return 0;
}
