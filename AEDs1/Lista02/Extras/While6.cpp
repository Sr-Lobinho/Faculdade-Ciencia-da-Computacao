#include <iostream>
using namespace std;

int somaN(int num){
	int i,soma = 0; 
	while (i < num){
		i += 1;
		if (i != num){
			cout << i << " + "; 
	}
		soma += i;	
	}
	cout << num << endl;
	return soma;
}
int main(){
	int n = 0;
	cout << "Informe um numero: ";
	cin >> n;
	cout << somaN(n);
	return 0;
}
