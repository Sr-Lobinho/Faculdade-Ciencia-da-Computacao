float maiorValor(float a, float b, float c){
	if (a >= b and a >= c){
		return a;
	}
	else if (b >= a and b >= c){
		return b;
	}
	else{
		return c;
	}
}

int main(int argc, char** argv) {
	float n1, n2, n3 =0;
	cout << "Digite 3 valores: " << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cout << "O maior dentre os 3 e " << maiorValor(n1, n2, n3);
		
	return 0;
}
