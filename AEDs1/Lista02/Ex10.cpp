int main(){
	string nome, senha;
	
	do{
		cout << "Informe seu nome: ";
		cin >> nome;
		
		cout << "Informe sua senha: ";
		cin >> senha;
		
		if (senha == nome){
			cout << "\033[31mSenha invalida!\033[m" << endl;
		}
	}while(senha == nome);
	
	cout << "\033[32mCadastro concluido!\033[m" << endl;
  
	return 0;
}
