#include <iostream>
using namespace std;

void verificaNum(){
	int n =0, c0_25 =0, c26_50 = 0, c51_75 =0, c76_100 =0; 
	while (true){
		cout << "Informe um numero: ";
		cin >> n;
		
		if (n < 0){
			break;
		}
		else if (n <= 25){
			c0_25++;
		}
		else if (n <= 50){
			c26_50++;
		}
		else if (n <= 75){
			c51_75++;
		}
		else if (n <= 100){
			c76_100++;
		}
	}
	cout << "Numeros de 0 a 25: " << c0_25 << endl;
	cout << "Numeros de 26 a 50: " << c26_50 << endl;
	cout << "Numeros de 51 a 75: " << c51_75 << endl;
	cout << "Numeros de 76 a 100: " << c76_100 << endl;
}
int main(){
	verificaNum();
	return 0;
}
