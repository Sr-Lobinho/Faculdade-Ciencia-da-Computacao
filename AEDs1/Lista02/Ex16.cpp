#include <iostream>
using namespace std;

void calculaQuantos(){
	int imp = 0, par = 0, n = 0;
	
	for (int i = 0; i < 10; i++){
		cout << "Digite um numero: ";
		cin >> n;
		if (n%2 == 0){
			par += 1;
		}
		else{
			imp += 1;
		}
	}
	cout << "Dos 10 valores " << par << " foram pares e " << imp << " foram impares." << endl;
}
int main(){
	calculaQuantos();
	return 0;
}
