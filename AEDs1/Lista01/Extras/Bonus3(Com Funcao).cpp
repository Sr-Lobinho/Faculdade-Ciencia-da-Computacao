bool checaBissexto(int a){
	if ((a % 4 == 0 and a % 100 != 0) or (a % 400 == 0)){
		cout << "O ano e bissexto!";
		return true;
	}
	cout << "O ano nao e bissexto";
	return false;
}
int main(){
	int ano = 0;
	cout << "Informe o ano: ";
	cin >> ano;
	
	checaBissexto(ano);
	
	return 0;
}
