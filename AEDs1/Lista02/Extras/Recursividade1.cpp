#include <iostream>
using namespace std;

int soma(int n){
	if (n == 1){
		cout << " = ";
		return n;
	}
	else{
		cout << " + " << n-1;
		return n + soma(n-1);
	}
}
int main(){
	int n = 0;
	cout << "Informe ate que numero deseja somar: ";
	cin >> n;
	cout << n << soma(n);

  return 0;
}
