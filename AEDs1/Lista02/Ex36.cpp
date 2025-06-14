#include <iostream>
using namespace std;

void geraTabuada(){
	int num = 0, a1 = 0, an = 0;
	
	cout << "Deseja montar tabuada de: ";
	cin >> num;
	cout << "Comecar por: ";
	cin >> a1;
	cout << "Terminar em: ";
	cin >> an;
	
	for (int i = a1; i <= an; i++){
		cout << num << " X " << i << " = " << num * i << endl;
	}
}

int main(){
	geraTabuada();
	return 0;
}
