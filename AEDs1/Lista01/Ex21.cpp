void verificaTipo(int n){
	if (n%2 == 0){
		cout << "O numero e par.";
	}
	else{
		cout << "O numero e impar.";
	}
}
int main(int argc, char** argv) {
	int n = 0;
	cout << "Digite um numero: ";
	cin >> n;
	verificaTipo(n);
	
	
	return 0;
}
