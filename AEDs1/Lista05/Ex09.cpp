#include <iostream>
using namespace std;

struct Ponto2D{
	float x;
	float y;
	
	void preechePonto(char inst){
		cout << "Informe o valor de x no ponto " << inst << ": ";
		cin >> x;
		cout << "Informe o valor de y no ponto " << inst << ": ";
		cin >> y;
	}	
};


struct Triangulo{
	Ponto2D A;
	Ponto2D B;
	Ponto2D C;
	
	
	float calculaArea(){
		float area;
		area = (A.x * B.y) + (A.y * C.x) + (B.x * C.y);
		area -= (B.y * C.x) + (A.x * C.y) + (A.y * B.x);
		if(area < 0){
			area *= -1;
		}
		area /= 2;
		return area;
	}
	
	void imprimeArea(){
		cout << "Area do triangulo: " << calculaArea() << endl;
	}
	
};

int main(){
	Triangulo T1;
	T1.A.preechePonto('A');
	T1.B.preechePonto('B');
	T1.C.preechePonto('C');
	T1.imprimeArea();
	return 0;
}
