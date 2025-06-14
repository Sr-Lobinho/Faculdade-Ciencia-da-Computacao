void verificaPolaridadeTipo(int n){
	if (n < 0){
		cout << "O numero e negativo e ";
	}
	else if (n > 0){
		cout << "O numero e positivo e ";
	}
	else{
		cout << "O numero e neutro e ";
	}
	if (n%2 == 0){
		cout << "par.";
	}
	else{
		cout << "impar.";
	}
}
int main(int argc, char** argv) {
	int n = 0;
	cout << "Informe um numero: ";
	cin >> n;
	verificaPolaridadeTipo(n);
	
	return 0;
}
