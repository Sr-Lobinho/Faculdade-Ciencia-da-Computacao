float mediaAritmetica(float a, float b, float c){
	return (a+b+c)/3;
}

int main(int argc, char** argv) {
	float n1, n2, n3 = 0.0;
	cout << "Informe as 3 notas: " << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cout << "A media aritmetica das 3 notas e " << mediaAritmetica(n1,n2,n3);
	
	return 0;
}
