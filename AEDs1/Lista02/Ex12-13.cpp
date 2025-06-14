void calculaAnos(){
	//int A = 80000, B = 200000, ano = 0;
	
	float A = 0, B = 0, ano = 0, perA = 0.0, perB = 0.0;
	char opc = ' ';
	do{	
		do{
			cout << "Informe a populacao de A: ";
			cin >> A;
			cout << "Informe a taxa de aumento de A: ";
			cin >> perA;
			
			cout << "Informe a populacao de B: ";
			cin >> B;
			cout << "Informe a taxa de aumento de B: ";
			cin >> perB;
			if (A > B){
				cout << "\033[31mA populacao de A deve ser menor que a de B!\033[m" << endl;
			}
			if (perA < 0 or perB < 0){
				cout << "\033[31mA taxa de aumento nao pode ser negativa!\033[m" << endl;
			}
			}while((A > B) or (perA < 0 or perB < 0));
		do{
			A += A * (perA/100);            //0.03;
			B += B * (perB/100);           //0.015;

			ano += 1;
			cout << "Ano: " << ano << endl;
			cout << "A: " << A << endl;
			cout << "B: " << B << endl;
		}while(B > A);
		
		cout << "Demorou " << ano <<  " anos" << endl << endl;
		cout << "Deseja recomecar?(s/n): ";
		cin >> opc;
		cout << endl;
	}while (opc == 's');
	
	cout << "Fim do Programa." << endl;
}
int main(){
	calculaAnos();
	return 0;
}
