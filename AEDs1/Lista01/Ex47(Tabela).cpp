main(int argc, char** argv) {
	int i = 0;
	cout << "Indice        Opcao" << endl; 
	cout << "0.......<0,3  -> 0" << endl;
	cout << "0,3.....<0,4  -> 1" << endl;
	cout << "0,4.....<0,5  -> 2" << endl;
	cout << "0,5........   -> 3" << endl << endl;
	cout << "Informe em qual opcao o indice de poluicao atual se encaixa: ";
	cin >> i;
	switch(i){
		case 0:
			cout << "Tudo certo!";
			break;
		case 1:
			cout << "Grupo 1 parar as atividades!";
			break;
		case 2:
			cout << "Grupos 1 e 2 cessar as atividades!";
			break;
		case 3:
			cout << "PARAR TODAS AS ATIVIDADES!";
			break;
		default:
			cout << "Opcao invalida!";
		
	}
	
	return 0;
}
