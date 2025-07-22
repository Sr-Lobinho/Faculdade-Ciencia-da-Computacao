#include <iostream>
using namespace std;

struct Transacao{
	string tipo;
	float valor;
	string data;
	string recebedor;
};
struct ContaBancaria{
	string numconta;
	float saldo;
	Transacao *transacoes;
	int tam = 5;
	int numTransacoes = 0;
	
	void preencheConta(int inst){
		cout << "Conta " << inst << ": " << endl;
		cout << "Informe o numero da conta: ";
		cin >> numconta;
		cout << "Informe o saldo inicial: ";
		cin >> saldo;
		transacoes = new Transacao[tam];
	}
	
	void imprimeExtrato(){
		for (int i = 0; i < numTransacoes; i++){
			cout << "Tipo: " << transacoes[i].tipo << endl;;
			if(transacoes[i].tipo == "Transferencia"){
				cout << "Recebedor: " << transacoes[i].recebedor << endl;
			}
			cout << "Valor: " << transacoes[i].valor << endl;
			cout << "Data: " << transacoes[i].data;
		}
		cout << endl;
	}
	
	
};
struct Banco{
	ContaBancaria *contas;
	int numContas;
	
	void preencheBanco(){
		cout << "Informe quantas contas tem: ";
		cin >> numContas;
		contas = new ContaBancaria[numContas];
		for (int i = 0; i < numContas; i++){
			contas[i].preencheConta(i+1);
		}
	}
	
	void saque(string numero, string data, float valor){
		for (int i = 0; i < numContas; i++){
			if(contas[i].numconta == numero){
				if(valor <= contas[i].saldo){
					contas[i].saldo -= valor;
					
					Transacao T;
					T.tipo = "Saque";
					T.valor = valor;
					T.data = data;
					
					contas[i].transacoes[contas[i].numTransacoes] = T;
					contas[i].numTransacoes++;
					cout << "Saque realizado com sucesso!" << endl;
					return;
				}
				else{
					cout << "Saldo insuficiente para o saque!" << endl;
					return;
				}
			}
		}
		cout << "Conta nao encontrada" << endl;
	}
	
	void deposito(string numero, string data, float valor){
		for (int i = 0; i < numContas; i++){
			if(contas[i].numconta == numero){
				contas[i].saldo += valor;
				
				Transacao T;
				T.tipo = "Deposito";
				T.valor = valor;
				T.data = data;
				
				contas[i].transacoes[contas[i].numTransacoes] = T;
				contas[i].numTransacoes++;
				cout << "Deposito realizado com sucesso!" << endl;
				return;
			}
		}
		cout << "Conta nao encontrada" << endl;
	}
	
	void transferencia(string numero1, string data, float valor, string numero2){
		for (int i = 0; i < numContas; i++){
			if(contas[i].numconta == numero1){
				for (int j = 0; j <numContas; j++){
					if (contas[j].numconta == numero2){
						if(valor <= contas[i].saldo){
							contas[i].saldo -= valor;
							contas[j].saldo += valor;
							
							Transacao T;
							T.tipo = "Transferencia";
							T.recebedor = numero2;
							T.valor = valor;
							T.data = data;
							
							contas[i].transacoes[contas[i].numTransacoes] = T;
							contas[i].numTransacoes++;
							return;
						}
						else{
							cout << "Saldo insuficiente para a transferencia!" << endl;
							return;
						}
					}			
				}
			}
		}
		cout << "Conta nao encontrada" << endl;
	}
	
	void exibeExtrato(string numero){
		for (int i =0; i < numContas; i++){
			if (contas[i].numconta == numero){
				contas[i].imprimeExtrato();
				return;
			}
		}
		cout << "Conta nao encontrada!" << endl;
	}

	
};

int main(){
	Banco B1;
	B1.preencheBanco();
	bool menu = true;
	while(menu){
		int opt;
		string numero, data, numerot;
		float valor = 0;
		cout << endl;
		cout << "1 - Saque" << endl;
		cout << "2 - Deposito" << endl;
		cout << "3 - Transferencia" << endl;
		cout << "4 - Exibir Extrato" << endl;
		cout << "5 - Finalizar Programa" << endl;
		cout << "Opcao: ";
		cin >> opt;
		if (opt > 0 and opt < 4){
			cout << "Informe o numero da conta para a transacao: ";
			cin >> numero;
			cout << "Informe o valor do saque: ";
			cin >> valor;
			cout << "Informe a data da transacao(Modelo: xx/xx/xxxx): ";
			cin >> data;
		}
		switch(opt){
			case 1:
				B1.saque(numero,data,valor);
				break;
			case 2:
				B1.deposito(numero,data,valor);
				break;
			case 3:
				cout << "Informe o numero da conta para qual sera feita a transferencia: ";
				cin >> numerot;
				B1.transferencia(numero,data,valor,numerot);
				break;
			case 4:
				cout << "Informe o numero da conta para exibir o extrato: ";
				cin >> numero;
				B1.exibeExtrato(numero);
				break;
			case 5:
				menu = false;
				break;
			default:
				cout << "Opcao invalida!" << endl;
		}
	}
	cout << "Fim do Programa." << endl;
	return 0;
}
