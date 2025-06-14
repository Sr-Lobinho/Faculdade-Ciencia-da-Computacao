#include <iostream>
using namespace std;

bool verificaPrimo(int n){
	int count = 0;
	
	for (int i = n; i >= 1; i -= 1){
		if (n % i == 0){
			count += 1;
		}
	}
	if (count == 2){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int n = 0, count = 0;
	do{
		cout << "Informe ate onde a sequencia vai: ";
		cin >> n;
		if (n <= 0){
			cout << "\033[31mValor Invalido!\033[m" << endl;
		}
	}while (n <= 0);
	
	for (int i = 1; i <= n; i++){
		if (verificaPrimo(i)){
			cout << i << " ";
		}
		count += i;
	}
	cout << endl;
	cout << "\033[36mForam executadas " << count << " divisoes.\033[m" << endl;
	return 0;
}
