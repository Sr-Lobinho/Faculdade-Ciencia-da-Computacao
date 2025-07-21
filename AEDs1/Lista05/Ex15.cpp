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
	float area;
	
	void criaPoligono(){
		do{
			cout << "Informe quantos vertices o poligono tem: ";
			cin >> tam;
			if(tam < 3){
				cout << "Tamanho invalido!" << endl;
			}
		}while(tam < 3);
		vertices = new Ponto2D[tam];
		for (int i = 0; i < tam; i++){
			vertices[i].preechePonto(i+1);
		}
	}
	bool verificaConvexo(){
		
	}
	// Area = 1/2 *[(x1y2 + x2y3 ... xny1)- (y1x2 +y2x3 ... ynx1)]
	void calculaArea(){
		float a1 = 0, a2 = 0;
		for (int i = 0; i < tam; i++){
			if (i == tam - 1){
				a1 += (vertices[i].x * vertices[0].y);
				a2 += (vertices[i].y * vertices[0].x);
			}
			else{
				a1 += (vertices[i].x * vertices[i+1].y);
				a2 += (vertices[i].y * vertices[i+1].x);
			}
		}
		area = 0.5 *(a1 - a2);
		if (area < 0){
			area *= -1;
		}
		cout << "Area: " << area;
	}
	
	
};

int main(){
	Poligono P1;
	P1.criaPoligono();
	P1.calculaArea();
	return 0;
}
