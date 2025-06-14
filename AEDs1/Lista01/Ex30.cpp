#include <iostream>
using namespace std;

bool verificaMultiplo(int a, int b){
	if (a % b == 0 or b % a == 0){
		return true;
	}
	else{
		return false;
	}
}

int main(int argc, char** argv) {
	int n1, n2 = 0;
	cout << "Informe 2 valores: " << endl;
	cin >> n1;
	cin >> n2;
	
	if (verificaMultiplo(n1,n2)){
		cout << "Os 2 valores sao multiplos!";
	}
	else{
		cout << "Os 2 valores nao sao multiplos";
	}
	return 0;
}
