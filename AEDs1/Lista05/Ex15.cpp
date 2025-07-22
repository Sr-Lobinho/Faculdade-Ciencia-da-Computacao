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
	float produtoVetorial(Ponto2D &A, Ponto2D &B, Ponto2D &C){
		float produto;
		produto = (B.x-A.x)* (C.y - B.y)-(B.y-A.y)*(C.x-B.x);
		return produto;
	}
	
	bool verificaConvexo(){
		bool eNegativo = false;
		bool ePositivo = false;
		float cross;
		for (int i = 0; i < tam; i ++){
			if (i < tam-2){
				cross = produtoVetorial(vertices[i],vertices[i+1],vertices[i+2]);
			}
			else if(i == tam-2){
				cross = produtoVetorial(vertices[tam-2],vertices[tam-1],vertices[0]);
			}
			else if (i == tam-1){
				cross = produtoVetorial(vertices[tam-1],vertices[0],vertices[1]);
			}
			if (cross < 0){
				eNegativo = true;
			}
			else if (cross > 0){
				ePositivo = true;
			}
			
		}
		if (eNegativo and ePositivo){
			return false;
		}
		else{
			return true;
		}
	}
	
	// Area = 1/2 *[(x1y2 + x2y3 ... xny1)- (y1x2 +y2x3 ... ynx1)]
	void calculaArea(){
		float a1 = 0, a2 = 0;
		if (verificaConvexo()){
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
		else{
			cout << "Poligono nao convexo!" << endl;
		}
	}
	
	
};

int main(){
	Poligono P1;
	P1.criaPoligono();
	P1.calculaArea();
	return 0;
}
