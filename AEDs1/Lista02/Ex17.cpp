void imprimeFibo(double n){
	double a, b, c, count = 0;
	b = 1;
	c = 1;
	while (count < n){
		cout << c << ",";
		c = b + a;
		a = b;
		b = c;
		count ++;	
	}
	cout << "..." << endl;
}
int main(){
	double n = 0;
	cout << "Informe o tamanho da sequencia: ";
	cin >> n;
	
	imprimeFibo(n);
	return 0;
}
