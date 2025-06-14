void verificaPrimo(){
	int n = 0, count = 0;
	
	do{
		cout << "Informe um numero: ";
		cin >> n; 
		if (n <= 0){
			cout << "\033[31mNumero Invalido!\033[m" << endl;
		}
	}while(n<=0);
	for (int i = n; i >= 1; i -= 1){
		if (n % i == 0){
			count += 1;
		}
	}
	if (count == 2){
		cout << n << " e um numero primo." << endl;
	}
	else{
		cout << n << " nao e um numero primo." << endl;
		for (int i = n; i >= 1; i -= 1){
		if (n % i == 0){
			cout << i << " ";
		}
	}
}
}

int main(){
	verificaPrimo();
	return 0;
}
