float mediaPonderada(float a, float b, float c){
	
	return (a * 2 + b * 3 + c * 5)/(2+3+5);
}

int main(int argc, char** argv) {
	float n1, n2, n3 = 0;
	
	cout << "Digite as 3 notas: " << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	
	cout << "A media ponderada dessas notas e " << mediaPonderada(n1,n2,n3);
	
	return 0;
}
