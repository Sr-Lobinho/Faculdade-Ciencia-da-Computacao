#include <iostream>
using namespace std;

float calculaArea(float r){
	return r * r * 3.14;
}

int main(){
	float r, area = 0.0;
	do{
		cout << "Informe o raio: ";
		cin >> r;
	}while(r < 0);
	
	area = calculaArea(r);
	cout << "A area do circulo e: " << area << endl;
	
	return 0;
}
