int main(int argc, char** argv) {
	int opcao = 0;
	cout << "Informe um numero de 1 a 7: ";
	cin >> opcao;
	switch(opcao) {
		case 1:
			cout << "O primeiro dia da semana e Domingo." << endl;
			break;
		case 2:
			cout << "O segundo dia da semana e Segunda Feira." << endl;
			break;
		case 3:
			cout << "O terceiro dia da semana e Terça Feira." << endl;
			break;
		case 4:
			cout << "O quarto dia da semana e Quarta Feira." << endl;
			break;
		case 5:
			cout << "O quinto dia da semana e Quinta Feira." << endl;
			break;
		case 6:
			cout << "O sexto dia da semana e Sexta Feira." << endl;
			break;
		case 7:
			cout << "O setimo e ultimo dia da semana e o Sabado" << endl;
			break;
		default:
			cout << "Opcao invalida!" << endl;
		
	return 0;
	}
}
