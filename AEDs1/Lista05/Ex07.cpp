#include <iostream>
using namespace std;

struct Ponto2D{
	float x;
	float y;
	void preechePonto(int inst){
		cout << "Informe o valor de x no ponto " << inst << ": ";
		cin >> x;
		cout << "Informe o valor de y no ponto " << inst << ": ";
		cin >> y;
	}
	float calculaDistancia(Ponto2D &P2){
		float distancia;
		distancia = sqrt(pow(P2.x - x,2) + pow(P2.y - y,2));
		return distancia;
	}
	
};
int main(){
	Ponto2D P1, P2;
	P1.preechePonto(1);
	P2.preechePonto(2);
	cout << "A distancia entre os 2 pontos: " << P1.calculaDistancia(P2) << endl;
	return 0;
}
