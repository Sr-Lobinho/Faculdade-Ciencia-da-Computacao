void imprimeFibo(){
	int a = 0, b = 0, c = 0;
	b = 1;
	c = 1;
	while (c < 500){
		cout << c << ",";
		c = b + a;
		a = b;
		b = c;
	}
	cout << c << endl;
	
}
int main(){
	
	imprimeFibo();
	return 0;
}
