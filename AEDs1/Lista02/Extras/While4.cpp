#include <iostream>
using namespace std;

void imprimeSequencia(int n){
	int i = 1;
	while (i <= n){
		cout << i << " "; 
		i += 1;
	}
}

int main(){
	int num = 0;
	cout << "Informe quantos numeros: ";
	cin >> num;
	imprimeSequencia(num);
	
	
	return 0;
}
