#include <iostream>
using namespace std;

float mediaAlunos(int t){
	float count = 1, alunos = 0, media = 0;
	while (count <= t){
		do{
			cout << "Informe quantos alunos a turma " << count << " tem: ";
			cin >> alunos;
			if (alunos < 0 or alunos > 40){
				cout << "\033[31mNumero invalido informe um valor correto\033[m" << endl << endl;
			}
		}while(alunos < 0 or alunos > 40);
		media += alunos;
		count ++;
	}
	media /= t;
	return media;
}

int main(){
	int turmas = 0;
	float media = 0;
	cout << "Quantas turmas serao utilizadas: ";
	cin >> turmas;
	media = mediaAlunos(turmas);
	cout << "A media e: " << media << endl;
	
	return 0;
	
}
