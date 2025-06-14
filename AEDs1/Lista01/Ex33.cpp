float calculaPeso(float a, char s){
	if (s == 'M'){
		return (72.7 * a) - 58;
	}
	else if (s == 'F'){
		return (62.1 * a) - 44.7;
	}
	
}

int main(int argc, char** argv) {
	float altura = 0.0;
	char sexo =' ';
	cout << "Informe sua altura: ";
	cin >> altura;
	cout << "Informe seu sexo(M/F): ";
	cin >> sexo;
	
	cout << "Seu peso ideal seria " << calculaPeso(altura, sexo);
	
	
	return 0;
}
