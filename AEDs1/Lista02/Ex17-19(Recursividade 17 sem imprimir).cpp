int fatorial(int n){
	if (n == 0){
		cout << " = ";
		return 1;
	}
	else{
		if (n > 1){
			cout << " x " << n - 1;
		}
		return n*fatorial(n-1);
	}
}

int fibo(int n){
	if (n == 0){
		return 0;
	}
	else if (n == 1){
		return 1;
	}
	else{	
		return fibo(n-1) + fibo(n-2);
	}
	
	
}

int main(){
	int n = 0, n2 = 0;
	cout << "Escolha um valor pra fatoriar: ";
	cin >> n;
	
	cout << n << "! = " << n << fatorial(n) << endl << endl;
	
	cout << "Agora escolha quantas casas de fibonacci voce deseja: ";
	cin >> n2;
	
	cout << fibo(n2) << endl;
	
	return 0;
}
