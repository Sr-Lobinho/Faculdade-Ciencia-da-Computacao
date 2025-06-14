void imprimeFatorial(){
	int n = 0, f = 1;
	cout << "Informe o valor que deseja fatoriar: ";
	cin >> n;
	cout << n << "! =  " << n;
	while (true){
		f *= n;
		n -= 1;
		if (n == 0){
			break;
		}
		cout << " x " << n;
	}
	cout << " = " << f << endl;
}

int main(){
	imprimeFatorial();
	return 0;
}
