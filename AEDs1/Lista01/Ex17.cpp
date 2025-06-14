#include <iostream>
using namespace std;

void polaridade(float n){
	if (n < 0){
		cout << "O numero e negativo.";
	}
	else if (n > 0){
		cout << "O numero e positivo.";
	}
	else{
		cout << "O numero e neutro.";
	}
}
int main(int argc, char** argv) {
	float n = 0;
	cout << "Informe um numero: ";
	cin >> n;
	polaridade(n);
	
	return 0;
}
