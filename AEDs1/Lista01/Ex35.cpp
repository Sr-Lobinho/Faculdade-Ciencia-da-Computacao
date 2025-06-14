float mediaAritmetica(float a, float b, float c){
	return (a+b+c)/3;
}
float mediaPonderada(float a, float b, float c){
	if (a >= b and a >= c) {
		return (a * 4 + b * 3 + c * 3)/(4+3+3);
	}
	else if (b >= a and b >= c) {
		return (a * 3 + b * 4 + c * 3)/(4+3+3);
	}
	else{
		return (a * 3 + b * 3 + c * 4)/(4+3+3);
	}
}
float mediaHarmonica(float a, float b, float c){
	return 3/(1/a + 1/b + 1/c);
}
int main(int argc, char** argv) {
	int opcao = 0;
	float n1, n2, n3 = 0;
	cout << "Informe a nota 1: ";
	cin >> n1;
	cout << "Informe a nota 2: ";
	cin >> n2;
	cout << "Informe a nota 3: ";
	cin >> n3;
	cout << "Escolha o tipo de media que deseja calcular: " << endl;
	cout << "1 - Aritmetica" << endl;
	cout << "2 - Ponderada(3,3,4)" << endl;
	cout << "3 - Harmonica" << endl;
	cout << "Opcao: ";
	cin >> opcao;
	switch (opcao) {
		case 1:
			cout << "Sua media foi: " << mediaAritmetica(n1,n2,n3);
			break;
		case 2:
			cout << "Sua media foi: " << mediaPonderada(n1,n2,n3);
			break;
		case 3:
			cout << "Sua media foi: " << mediaHarmonica(n1,n2,n3);
			break;
		default:
			cout << "Opcao invalida!";
		break;
	}
	return 0;
}
