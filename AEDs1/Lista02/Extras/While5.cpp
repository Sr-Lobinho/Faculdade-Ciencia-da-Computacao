#include <iostream>
using namespace std;

void imprimeImpar(int n){
	int i = 1;
	while (i <= n) {
		if (i % 2 != 0){
			cout << i << " ";
		}
		i++;
	}	
}
int main(){
	int num = 0;
	cout << "Informe um numero: ";
	cin >> num;
	imprimeImpar(num);
	return 0;
}
