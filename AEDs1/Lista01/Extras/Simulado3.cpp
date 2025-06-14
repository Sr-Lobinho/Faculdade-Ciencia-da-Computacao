#include <iostream>
using namespace std;

int checaAlgo(int a, int b, int c, int d, int e, int f){
	int soma = a + b + c + d + e + f;  
	if (a == b and a == c){
		cout << "Os 3 primeiros valores sao iguais" << endl;
		return 15;
	}
	else if(d == e and d == f){
		cout << "Os 3 ultimos valores sao iguais" << endl;
		return 15;
	}
	
	else if (soma % f == 0){
		cout << "\033[41m ALERTA! \033[m" << endl;
	}
	return soma;
}
void imprime(float i){
	cout << "Informe o valor " << i << ": ";
}

int main(){
	int a,b,c,d,e,f, valor= 0.0;
	imprime(1);
	cin >> a;
	imprime(2);
	cin >> b;
	imprime(3);
	cin >> c;
	imprime(4);
	cin >> d;
	imprime(5);
	cin >> e;
	imprime(6);
	cin >> f;
	
	valor = checaAlgo(a,b,c,d,e,f);
	if (valor == 15){
		cout << "Otimo" << endl;
	}
	else{
		cout << "Excelente" << endl;
	}
	return 0;
}
