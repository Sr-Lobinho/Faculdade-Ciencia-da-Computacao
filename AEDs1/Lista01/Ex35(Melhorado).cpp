float mediaAritmetica(float a, float b, float c){
	return (a+b+c)/3;
}
float mediaPonderada(float a, float b, float c){
	float maior, n1 ,n2 = 0;
	if (a >= b and a >= c){
		maior = a;
		n1 = b;
		n2 = c;
	}
	else if (b >= a and b >= c){
		maior = b;
		n1 = a;
		n2 = c;
	}
	else{
		maior = c;
		n1 = a;
		n2 = c;
	}
	
	return (n1*3+n2*3+maior*4)/10;
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
