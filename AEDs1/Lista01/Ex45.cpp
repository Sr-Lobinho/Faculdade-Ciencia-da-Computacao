int main(int argc, char** argv) {
	int valor, resto, n100, n50, n10, n5, n1 = 0;
	cout << "Informe um valor inteiro: ";
	cin >> valor;
	
	n100 = valor / 100;
	resto = valor % 100;
	n50 = resto / 50;
	resto %= 50;
	n10 = resto / 10;
	resto %= 10;
	n5 = resto / 5;
	n1 = resto % 5;
	
	cout << "Cedulas R$ 100: " << n100 << endl;
	cout << "Cedulas R$  50: " << n50 << endl;
	cout << "Cedulas R$  10: " << n10 << endl;
	cout << "Cedulas R$   5: " << n5 << endl;
	cout << "Cedulas R$   1: " << n1 << endl;
	
	return 0;
}
