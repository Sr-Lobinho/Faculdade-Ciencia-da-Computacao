#include <iostream>
#include <math.h>
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
struct Poligono{
	Ponto2D* vertices;
	int tam;
	
	void criaPoligono(){
		cout << "Informe quantos vertices o poligono tem: ";
		cin >> tam;
		vertices = new Ponto2D[tam];
		for (int i = 0; i < tam; i++){
			vertices[i].preechePonto(i+1);
		}
	
	}
};

int main(){
	Poligono P1;
	P1.criaPoligono();
	
	return 0;
}
