#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int cod = 0;
	float s1, sn = 0.0;
	
	cout << "Codigo          Cargo      Percentual" << endl;
	cout << "  101          Gerente        10%" << endl;
	cout << "  102         Engenheiro      20%" << endl;
	cout << "  103          Tecnico        30%" << endl;
	cout << "(Algum outro)   Outros         40%" << endl << endl;
	
	cout << "Informe o codigo de seu cargo: ";
	cin >> cod;
	cout << "Informe seu salario: ";
	cin >> s1;
	cout << endl;
	switch(cod) {
		case 101:
			sn = s1+(s1*0.1);
			break;
		case 102:
			sn = s1+(s1*0.2);
			break;
		case 103:
			sn = s1+(s1*0.3);
			break;
		default:
			sn = s1+(s1*0.4);
	}
	cout << "Salario antigo: " << s1 << endl;
	cout << "Salario novo: " << sn << endl;
	cout << "O aumento: " << sn-s1 << endl;
	
	
	return 0;
}
