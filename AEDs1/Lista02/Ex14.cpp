void geraTabuada(){
	int n = 0;
	cout << "Informe um numero: ";
	cin >> n;
	cout << endl;
	
	for (int i = 1; (i <=10); i++){
		cout << n << " X " << i << " = " << n * i << endl;
	}
	
}

int main(){
	geraTabuada();
	return 0;
}
