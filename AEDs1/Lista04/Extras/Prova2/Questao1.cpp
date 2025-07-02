#include <iostream>
using namespace std;


int main(){
	int num = 0;
	int resto = 0;
	int a = 0, b = 0;
	do{
		cout << "Informe um numero: ";
		cin >> num;
		resto = num%11;
		if (resto %3 == 0 and num !=0){
			a++;
		}
		if (resto %5 == 0 and num %5 == 0 and num!=0){
			b++;
		}
		
	}while(num !=0);
	cout << "Restos multiplos de 3: " << a << endl;
	cout << "Restos e numeros conjuntamente mutiplos de 5: " << b << endl;
	
	return 0;
}
