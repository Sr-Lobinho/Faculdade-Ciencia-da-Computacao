#include <iostream>
using namespace std;

int main(){
	int num = 0, count = 0;
	do{
		cout << "Informe um numero (0 para encerrar): ";
		cin >> num;
		if (num % 2 == 0 and num > 0){
			count ++;
		}
		
	}while(num != 0);
	cout << "Foram informados " << count << " numeros pares e positivos!" << endl;
	
	return 0;
}
