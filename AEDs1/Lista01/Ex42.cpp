int transformaCase(float s){
	if (s <= 200){
		return 0;
	}
	else if (s <= 400){
		return 1;
	}
	else if (s <= 600){
		return 2;
	}
	else{
		return 3;
	}
}

int main(int argc, char** argv) {
	float saldo = 0;
	int opcao = 0;
	cout << "Informe seu saldo medio: ";
	cin >> saldo;
	
	opcao = transformaCase(saldo);
	
	switch (opcao){
		case 0:
			cout << "Saldo: " << saldo << " Credito: 0";
			break;
		case 1:
			cout << "Saldo: " << saldo << " Credito: " << saldo * 0.2;
			break;
		case 2:
			cout << "Saldo: " << saldo << " Credito: " << saldo * 0.3;
			break;
		case 3:
			cout << "Saldo: " << saldo << " Credito: " << saldo * 0.4;
			break;
		default:
			cout << "COMO????????";
			
	}
	return 0;
}
