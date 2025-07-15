#include <iostream>
using namespace std;

struct Circulo{
	float raio = 0;
	float PI = 3.14;
	float area;
	float perimetro;
	
	void preencheRaio(){
		do{
			cout << "Informe o raio: ";
			cin >> raio;
			if (raio <= 0){
				cout << "Raio invalido!" << endl;
			}
		}while(raio <= 0);
	}
	void calculaArea(){
		area = PI * (raio * raio);
		cout << "A area e: " << area << endl;
	}
	void calculaPerimetro(){
		perimetro = 2 * PI * raio;
		cout << "O perimetro e: " << perimetro << endl;
	}
};

int main(){
	Circulo C1;
	C1.preencheRaio();
	C1.calculaArea();
	C1.calculaPerimetro();
	return 0;
}
