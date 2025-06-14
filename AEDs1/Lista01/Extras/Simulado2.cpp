float calculaPreco(int P){
	float v, qntd, IPI, total = 0;
	cout << "Informe o valor da peca " << P << ": ";
	cin >> v;
	cout << "Informe a quantidade de pecas: ";
	cin >> qntd;
	cout << "Informe o IPI da peca " << P << ": ";
	cin >> IPI;
	
	total = (v * qntd) * (IPI/100+1);
	return total;
}
float soma(float a, float b){
	return a + b;
}

int main(){
	float totalX, totalY, total = 0;
	
	totalX = calculaPreco(1);
	totalY = calculaPreco(2);
	total = soma(totalY, totalX);
	
	cout << "O valor total e: " << total << endl;
	if (total >= 5000 and total <= 10000){
		cout << "Lucro.";
	}
	else if (total > 10000){
		cout << "Muito Lucro!";
	}
	
	return 0;
}
