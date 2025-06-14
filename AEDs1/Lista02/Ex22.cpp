void imprimeFatorial(){
	while(true){
		int n = 0, f = 1;
	
		do{
			cout << "Informe o valor que deseja fatoriar(Maximo 16 minimo 0, -15 pra parar): ";
			cin >> n;
			if (((n > 16 or n < 0) and n != -15)){
				cout << "Valor invalido!" << endl;
			}
		}while((n > 16 or n < 0) and n != -15);
		if (n == -15){
			break;
		}	
		if (n == 0){
			cout << n << "! = " << 1 << endl << endl;
		}
		else{
			cout << n << "! =  " << n;
		
			while (true){
				f *= n;
				n -= 1;
				if (n == 0){
					break;
				}
				cout << " x " << n;
			}
			cout << " = " << f << endl << endl;
		}
	}
	cout << "Fim do programa." << endl;
}

int main(){
	imprimeFatorial();
	return 0;
}
