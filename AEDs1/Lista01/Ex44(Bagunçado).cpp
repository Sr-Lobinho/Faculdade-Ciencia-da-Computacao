void imprimeCrescente(float a, float b, float c){
	if (a <= b and b <= c){
		cout << a << "," << b << "," << c;
	}
	else if (a <= c and c <= b){
		cout << a << "," << c << "," << b;
	}
	else if(b <= a and a <= c){
		cout << b << "," << a << "," << c;
	}
	else if (b <= c and c <= a){
		cout << b << "," << c << "," <<  a;
	}
	else if(c <= a and a <= b){
		cout << c << "," << a << "," << b;
	}
	else{
		cout << c << "," << b << "," << a;
	}
}

void imprimeDecrescente(float a, float b, float c){
	if (a >= b and b >= c){
		cout << a << "," << b << "," << c;
	}
	else if (a >= c and c >= b){
		cout << a << "," << c << "," << b;
	}
	else if(b >= a and a >= c){
		cout << b << "," << a << "," << c;
	}
	else if (b >= c and c >= a){
		cout << b << "," << c << "," << a;
	}
	else if(c >= a and a >= b){
		cout << c << "," << a << "," << b;
	}
	else{
		cout << c << "," << b << "," << a;
	}
}

void imprimeDestaque(float a, float b, float c) {
	if (a >= b and a >= c){
		cout << b << "," << a << "," << c;
	}
	else if (b >= a and b >= c){
		cout << a << "," << b << "," << c;
	}
	else if (c >= a and c >= b){
		cout << a << "," << c << "," << b;
	}
}


int main(int argc, char** argv) {
	int i = 0;
	float a, b, c = 0;
	
	cout << "Informe o primeiro valor: ";
	cin >> a;
	cout << "Informe o segundo valor: ";
	cin >> b;
	cout << "Informe o terceiro valor: ";
	cin >> c;
	cout << endl;
	
	cout << "1 - Ordem Crescente" << endl;
	cout << "2 - Ordem Decrescente" << endl;
	cout << "3 - Destacar maior" << endl;
	cout << "Escolha: ";
	cin >> i;
	cout << endl;
	
	switch (i){
		case 1:
			imprimeCrescente(a,b,c);
			break;
		case 2:
			imprimeDecrescente(a,b,c);
			break;
		case 3:
			imprimeDestaque(a,b,c);
			break;
		default:
			cout << "Opcao invalida!";
	}
	
	
	return 0;
}
