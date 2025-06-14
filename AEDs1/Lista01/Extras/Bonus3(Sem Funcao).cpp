int main(){
	int a = 0;
	cout << "Informe o ano: ";
	cin >> a;

	if ((a % 4 == 0 and a % 100 != 0) or (a % 400 == 0)){
		cout << "O ano e bissexto!";
		return 0;
	}
	cout << "O ano nao e bissexto";
	return 0;
}
