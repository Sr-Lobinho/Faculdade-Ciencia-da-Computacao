int main(int argc, char** argv) {
	int a, b, x = 0;
	cout << "Digite o valor de a e de b respectivamente:" << endl;
	cin >> a;
	cin >> b;
	if (a < b){
		x = a;
		a = b;
		b = x;
		cout << "a: " << a << " b: " << b;
	}
	else{
		cout << "Nao foi necessario trocar os valores";
	}
	
	return 0;
