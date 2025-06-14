void ambosPar(int a, int b){
	if (a % 2 == 0 and b % 2 ==0){
		cout << "Ambos a e b sao pares.";
	}
	else if (a % 2 == 0 and !(b % 2 == 0)){
		cout << "Apenas a e par.";
	}
	else if (!(a % 2 == 0) and b % 2 == 0){
		cout << "Apenas b e par.";
	}
	else{
		cout << "Nenhum dos 2 sao pares";
	}
}
int main(int argc, char** argv) {
	int a, b = 0;
	cout << "Informe os valores a e b respectivamente:" << endl;
	cin >> a;
	cin >> b;
	ambosPar(a, b);
	return 0;
}
