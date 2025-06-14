void calculaRaizes(float a, float b, float c){
	float delta, x1, x2 = 0;
	delta = (b*b)-4*c*a;
	if (delta >= 0){
		x1 = ((b * -1) + sqrt(delta))/(2*a);
		x2 = ((b * -1) - sqrt(delta))/(2*a);
		cout << "Delta: " << delta << endl;
		cout << "Raizes da equacao: X1 = " << x1 << " X2 = " << x2 << endl;
	}
	else{
		cout << "A equacao nao possui raizes reais.";
	}
}
int main(int argc, char** argv) {
	float a, b, c = 0;
	cout << "Informe a: ";
	cin >> a;
	cout << "Informe b: ";
	cin >> b;
	cout << "Informe c: ";
	cin >> c;
	calculaRaizes(a,b,c);
	return 0;
}
