#include <iostream>
using namespace std;

struct Data{
	int dia;
	int mes;
	int ano;
	int totaldias;
	void preencheData(string inst){
		cout << "Data " << inst << ": " << endl;
		cout << "Informe o ano: ";
		cin >> ano;
		do{
			cout << "Informe o mes: ";
			cin >> mes;
			if (mes < 1 or mes > 12){
				cout << "Mes invalido!" << endl;
			}
		}while(mes < 1 or mes > 12);
		bool diavalido = false;
		do{
			cout << "Informe o dia: ";
			cin >> dia;
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
					diavalido = true;
				}
			}
			else{
				diavalido = true;
			}
		}while(!diavalido);
		totaldias = dia;
		totaldias += mes*30;
		totaldias += ano*365;
	}

};
struct Funcionario{
	string nome;
	float salario;
	Data data;
	
	void preencheDados(int inst){
		cout << "Funcionario " << inst  << ": "<< endl;
		cout << "Informe o nome: ";
		cin >> nome;
		cout << "Informe o salario: ";
		cin >> salario;
		data.preencheData("de admissao");
	}
	
	Data diasEmData(int dias){
		Data resultado;
		int resto;
		resultado.ano = dias/360; 
		resto = dias % 360;
		resultado.mes = resto/30;
		resultado.dia = resto%30;
		return resultado;
	}
	
	void calculaTempo(Data &hoje){
		int diasdeservico;
		diasdeservico = hoje.totaldias-data.totaldias;
		Data tempodeservico;
		tempodeservico = diasEmData(diasdeservico);
		
		cout << "Tempo de servico: " << endl;
		cout << "Anos: " << tempodeservico.ano << endl;
		cout << "Meses: " << tempodeservico.mes << endl;
		cout << "Dias: " << tempodeservico.dia << endl;
	}
	
	void reajustaSalario(){
		float percent;
		cout << "Informe o percentual do reajuste: ";
		cin >> percent;
		salario *= (percent/100 + 1);
		cout << "Novo salario: " << salario << endl;
	}
	
};

int main(){
	Funcionario Fun1;
	Data hoje;
	Fun1.preencheDados(1);
	hoje.preencheData("hoje");
	Fun1.calculaTempo(hoje);
	Fun1.reajustaSalario();
	
	return 0;
}
