#include <iostream>
using namespace std;

struct ContaBancaria{
	string conta;
	float saldo = 0;
	
	void preencheConta(){
		cout << "Informe o numero da conta: ";
		cin >> conta;
	}
	void depositar(){
		float aux;
		cout << "Informe o quanto deseja depositar na conta "<< conta <<": ";
		cin >> aux;
		saldo += aux;
	}
	
	void sacar(){
		float aux;
		cout << "Informe o quanto deseja sacar na conta "<< conta <<": ";
		cin >> aux;
		if (saldo < aux){
			cout << "Valor invalido!" << endl;
		}
		else{
			saldo -= aux;
		}
	}
	void imprimeConta(){
		cout << endl;
		cout << "Conta: " << conta << endl;
		cout << "Saldo: " << saldo << endl;
		cout << endl;
	}
	
};

int main(){
	ContaBancaria C1;
	C1.preencheConta();
	C1.depositar();
	C1.imprimeConta();
	C1.sacar();
	C1.imprimeConta();
	return 0;
}
