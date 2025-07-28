#include <iostream>
using namespace std;

void preencheMatriz(float **m, int lin, int col){
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cout << "Aluno " << i << " diciplina " << j << ": ";
			cin >> m[i][j];
		}
	}
}
void zeraVet(float *vet, int tam){
	for (int i = 0; i < tam; i++){
		vet[i] = 0;
	}
}

void calculaMediaAluno(float**m, int lin, int col){
	float *medias = new float[lin];
	int maiorind;
	float maior = 0;
	zeraVet(medias,lin);
	for (int i = 0; i< lin; i++){
		for (int j = 0; j < col; j++){
			medias[i] += m[i][j];
		}
		medias[i] /= col;
		if (medias[i] > maior){
			maior = medias[i];
			maiorind = i;
		}
	}
	
	cout << "Medias dos alunos: " << endl;
	for (int i = 0; i < lin; i++){
		cout << "Aluno " << i << ": " << medias[i] << endl;
	}
	
	cout << "O aluno com maior media foi o aluno " << maiorind << endl;
}

void calculaMediaDisciplina(float **m, int lin, int col){
	float *medias = new float[col];
	zeraVet(medias,col);
	
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			medias[j] += m[i][j];
		}
	}
	cout << "Medias das diciplinas: " << endl;
	for (int i = 0; i < col; i++){
		medias[i] /= lin;
		cout << "Diplina " << i << ": " << medias[i] << endl;
	}
	
}
int main(){
	int lin = 5, col = 4;
	float **m = new float*[lin];
	for (int i = 0; i < lin; i++){
		m[i] = new float[col];
	}
	preencheMatriz(m,lin,col);
	calculaMediaAluno(m,lin,col);
	calculaMediaDisciplina(m,lin,col);
	
	return 0;
}
