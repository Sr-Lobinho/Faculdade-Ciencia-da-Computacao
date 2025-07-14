#include <iostream>
using namespace std;

struct Data{
	int dia;
	int mes;
	int ano;
	void preencheData(int inst){
		cout << "Data " << inst << ": " << endl;
		cout << "Informe o dia: ";
		cin >> dia;
		cout << "Informe o mes: ";
		cin >> mes;
		cout << "Informe o ano: ";
		cin >> ano;
	}
	void verificaData(int inst){
		cout << "Data " << inst << ": "<< endl;
		if (mes < 1 or mes > 12){
			cout << "Mes invalido!" << endl;
		}
		if (dia > 31 or dia < 1){
			cout << "Dia invalido!" << endl;
		}
		else if ((mes == 4 or mes == 6 or mes == 9 or mes == 11) and (dia > 30)){
			cout << "Dia invalido!" << endl;
		}
		else if (mes == 2 and dia > 28){
			if(dia == 29 and ((ano % 4 != 0) or (ano %400 != 0))){
				cout << "Dia invalido! (Ano nao bissexto)" << endl;
			}
			else if (dia > 29){
				cout << "Dia invalido!" << endl;
			}
			else{
				cout << "Dia valido!" << endl;
			}
		}
		else{
			cout << "Dia valido!" << endl;
		}
		
		
		if (dia == 25 and mes == 12){
			cout << "\033[;;7mDECEMBER HOLIDAY!\033[m" << endl;
		}
		
	}
	
};
int main(){
	Data data1;
	data1.preencheData(1);
	data1.verificaData(1);
}
