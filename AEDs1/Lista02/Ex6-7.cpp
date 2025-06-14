void ImprimeNumero(int n1, int n2){
	int soma = 0;
	for (int i = n1 +1; i < n2; i++){
		cout << i << ",";
		soma += i;
	}
	cout << endl;
	cout << "A soma desses numeros e " << soma << endl;
	
}
int main(){
	int n1, n2 = 0;
	cout << "Informe o ponto de partida: ";
	cin >> n1;
	cout << "Informe o segundo numero: ";
	cin >> n2;
	
	ImprimeNumero(n1,n2);
	return 0;
	
}
