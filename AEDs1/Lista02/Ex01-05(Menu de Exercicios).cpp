#include <iostream>
using namespace std;

// ---------------------------------------------------------------Menu de exercicios-----------------------------------------------------------------------------
// Exercicio 1
void imprimeEmbaixo(){
	cout << "\033[91m";
	int i = 1;
	while (i <= 20){
		cout << i <<  endl;
		i++;
	}
	cout << "\033[m";
}

void imprimedoLado(){
	int i = 1;
	cout << "\033[94m";
	cout << "  ";
	while (i <= 20){
		cout << i << " ";
		i++;
	}
	cout << "\033[m" << endl;
}

// Exercicio 2
void maiorNumero(){
	float n, mn = 0;
	cout << "\033[35m";
	while (true) {
		cout << "Informe um numero (0 pra parar): ";
		cin >> n;
		if (n == 0){
			break;
		}
		if (n >= mn){
			mn = n;
		}
	}
	cout << "O maior numero foi: " << mn << endl;
	cout << "\033[m";
}

// Exercicio 3
void calcular(){
	float n, soma, media, count = 0;
	cout << "\033[96m";
	while (true){
		cout << "Informe um numero (0 pra parar): ";
		cin >> n;
		if (n == 0){
			break;
		}
		soma += n;
		count += 1;
	}
	media = soma/count;
	
	cout << "A soma dos " << count << " numeros e: " << soma << endl << "E a media e: " << media << endl;
	cout << "\033[m";
}

// Exercicio 4
void somaMaior(){
	float n = 0, m1 = 0, m2 = 0, m3 = 0, soma = 0;
	
	while (true) {
		cout << "\033[32mInforme um numero (0 pra parar): ";
		cin >> n;
		if (n == 0){
			break;
		}
		if (n >= m1){
			m3 = m2;
			m2= m1;
			m1 = n;
		}
		else if (n >= m2){
			m3 = m2;
			m2 = n;
		}
		else if (n >= m3){
			m3 = n;
		}
	}
	soma = m1 + m2 + m3; 
	cout << endl;
	cout << "M1: " << m1 << " M2: " << m2 << " M3: " << m3 << endl;
	cout << "A soma dos 3 maiores e:" << soma << "\033[m" << endl;
}

// Exercicio 5
void imprimeImpar(){
	int n = 0;
	cout << "\033[33m";
	while (n <= 50){
		if (n % 2 != 0){
			cout << n << " ";
		}
		n += 1;
	}
	cout << "\033[m" << endl;
}

// Menu
int main(){
	bool v = true;
	while (v){
		int cod = 0;
		cout << endl;
		cout << "---------" << " Menu de Exercicios " << "---------" << endl;
		cout << "Cod.             Exercicio" << endl;
		cout << "1          Imprime em baixo e do lado    " << endl;
		cout << "2               Maior numero    " << endl;
		cout << "3               Somar numeros    " << endl;
		cout << "4                Soma maior    " << endl;
		cout << "5              Imprime impar    " << endl;
		cout << "999           Parar o programa" << endl << endl;
		cout << "Escolha o codigo do exercicio: ";
		cin >> cod;
		cout << endl;
		switch(cod){
			case 1:
				imprimedoLado();
				imprimeEmbaixo();
				break;
			case 2:
				maiorNumero();
				break;
			case 3:
				calcular();
				break;
			case 4:
				somaMaior();
				break;
			case 5:
				imprimeImpar();
				break;
			case 999:
				v = false;
				break;
			default:
				cout << "Codigo invalido!" << endl << endl;
		}
	}
	cout << "Fim do programa!" << endl;
	return 0;
	
}
// ---------------------------------------------------------------------------------------------------------------------------------------------------------------
