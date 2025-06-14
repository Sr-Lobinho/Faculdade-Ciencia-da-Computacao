bool funcaoTroca(int a, int b){
	int x = 0;
	if (a < b){
		x = a;
		a = b;
		b = x;
		return true;
	}
	else{
		return false;
	}
}

int main(int argc, char** argv) {
	int a, b = 0;
	cout << "Informe os valores a e b respectivamente:" << endl;
	cin >> a;
	cin >> b;
	
	if (funcaoTroca(a, b)){
		cout << "Foi necessaria a troca.";
	}
	else{
		cout << "Nao foi necessaria a troca.";
	}
	
	
	return 0;
}
