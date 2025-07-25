#include <iostream>
using namespace std;

void preencheJogo(char **m, int tam){
	cout << "Preencha um exemplo de jogo da velha para verificar o vencedor: " << endl;
	
	for (int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			cout << "M["  << i << "][" << j << "] (X/O)= ";
			cin >> m[i][j];
		}
	}
}

char verificaJogo(char **m, int tam){
	for (int i = 0; i < tam; i ++){
		if (m[i][0] == 'X' and m[i][1] == 'X' and m[i][2] == 'X'){
			return 'X';
		}
		else if (m[i][0] == 'O' and m[i][1] == 'O' and m[i][2] == 'O'){
			return 'O';
		}
		
		if (m[0][i] == 'X' and m[1][i] == 'X' and m[2][i] == 'X'){
			return 'X';
		}
		else if (m[0][i] == 'O' and m[1][i] == 'O' and m[2][i] == 'O'){
			return 'O';
		}	
	}
	if (m[0][0] == 'X' and m[1][1] == 'X' and m[2][2] == 'X'){
		return 'X';
	}
	else if(m[0][0] == 'O' and m[1][1] == 'O' and m[2][2] == 'O'){
		return 'O';
	}
	else{
		return '-';
	}
}
void imprimeJogo(char **m, int tam){
	for (int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}
}

int main(){
	int tam = 3;
	char **m = new char*[tam];
	for (int i = 0; i < tam; i ++){
		m[i] = new char[tam];
	}
	preencheJogo(m,tam);
	char vencedor = verificaJogo(m,tam);
	if (vencedor == '-'){
		cout << "EMPATE!" << endl;
	}
	else{
		cout << "VENCEDOR: " << vencedor << endl;
	}
	imprimeJogo(m,tam);
	
	return 0;
}
