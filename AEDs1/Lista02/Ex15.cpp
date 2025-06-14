#include <iostream>
using namespace std;

float calculaPotencia(float a, float x){
	float i = 1.0;
	if (x > 0){
		for (int count = 1; count <= x; count++){
			i *= a;
		}
	}
	if (x < 0){
		for (int count = -1; count >= x; count -= 1){
			i = i / a;
		}
	}
	
	return i;
}

int main(){
	float a = 0.0, x = 0.0, p = 0.0;
	
	cout << "Informe a base: ";
	cin >> a;
	cout << "Informe o expoente: ";
	cin >> x;
	p = calculaPotencia(a,x);
	cout << a << " elevado a " << x << " e igual a " << p << endl;
	
	return 0;
}
