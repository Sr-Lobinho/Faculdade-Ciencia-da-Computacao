#include <iostream>
using namespace std;

struct Jogo{
	string nome;
	string plataforma;
	float *notas;
	int numnotas = 0;
	int tam;
	
	void preencheJogo(){
		cout << "Informe o nome do jogo: ";
		cin >> nome;
		cout << "Informe a plataforma do jogo: ";
		cin >> plataforma;
		cout << "Informe qual o maximo de avaliacoes: ";
		cin >> tam;
		notas = new float[tam];
	}
	void adicionaNota(float nota){
		if (numnotas < tam){
			if (nota < 0 or nota > 10){
				cout << "A nota deve ser entre 0 a 10" << endl;
			}
			else{
				notas[numnotas] = nota;
				numnotas++;
			}
		}
		else{
			cout << "Nao tem mais espaco para notas!" << endl;
		}
	}
	
	float calculaMedia(){
		float media = 0;
		for (int i = 0; i < numnotas; i++){
			media += notas[i];
		}
		media /= numnotas;
		return media;
	}
	
	void exibirAvaliacoes(){
		float media = calculaMedia();
		cout << "Jogo: " << nome << endl;
		cout << "Plataforma: " << plataforma << endl;
		cout << "Notas: [";
		for (int i = 0; i < numnotas-1; i++){
			cout << notas[i] << ", ";
		}
		cout << notas[numnotas-1] << "]" << endl;
		cout << "Media: " << media << endl;
	}
};
int main(){
	Jogo J1;
	J1.preencheJogo();
	float nota;
    do{
        cout << "Informe a nota do jogo " << J1.nome << ": ";
        cin >> nota;
        J1.adicionaNota(nota);
    }while(nota != -1);
    J1.exibirAvaliacoes();
    return 0;
}
