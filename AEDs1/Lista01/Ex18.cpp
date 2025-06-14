#include <iostream>
using namespace std;

int verificarNota(int index){
	float nota = 0;
	cout << "Digite a nota " << index << ": ";
	cin >> nota;
	if (nota > 60){
		return 1;
	}
	else{
		return 0;
	}
}

int main(int argc, char** argv) {
	int count = 0;
	count +=  verificarNota(1);
	count +=  verificarNota(2);
	count +=  verificarNota(3);
	count +=  verificarNota(4);
	count +=  verificarNota(5);
	
	cout << "Voce teve " << count << " notas acima de 60.";
	
	return 0;
}
