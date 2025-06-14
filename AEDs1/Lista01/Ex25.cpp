bool verificaAngulo(int a, int b, int c){
	int soma = 0;
	soma += a + b + c;
	if (soma == 180){
		return true;
	}
	return false;
	
}
int main(int argc, char** argv) {
	int a1, a2, a3 = 0;
	cout << "Informe 3 angulos de um triangulo respectivamente: " << endl;
	cin >> a1;
	cin >> a2;
	cin >> a3;
	
	if (verificaAngulo(a1, a2, a3)){
		cout << "Os 3 angulos sao validos.";
	}
	else{
		cout << "Os angulos nao sao validos.";
	}
	return 0;
}
