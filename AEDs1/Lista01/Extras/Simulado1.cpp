float calculaPreco(char c, float pA){
	float aumento, pN = 0;
	switch (c){
		case 'S':
			if (pA < 150000){
				aumento = 11;
			}
			else{
				aumento = 7;
			}
			break;
		case 'C':
			if (pA < 100000){
				aumento = 9;
			}
			break;
		case 'P':
			aumento = 4;
			break;
		default:
			aumento = 5;
	}
	pN = pA * (aumento/100 + 1);
	return pN;
}
	
void explicacao(){
	cout << " Cod.      Signficado       Aumento" << endl;
	cout << " 'S'         Sedan            7%(Se o preco for menor que R$150.000: 11%)" << endl;
	cout << " 'C'       Conversivel        0%(Se o preco for menor que R$100.000:  9%)" << endl;
	cout << " 'P'        Popular           4%" << endl;
	cout << " Qualquer outro               5%" << endl << endl;
}
	
	
int main(){
	float pA, pN = 0.0;
	char cod = '\0';
	explicacao();
	
	cout << "Informe o codigo: ";
	cin >> cod;
	cout << "Informe o Preco Antigo: ";
	cin >> pA;
	
	pN = calculaPreco(cod, pA);
		
	cout << "O novo preco sera " << pN << endl;
	return 0;
}
