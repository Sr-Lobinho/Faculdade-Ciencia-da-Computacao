#include <iostream>
using namespace std;

struct Retangulo{
	float largura;
	float altura;
	float area;
	float perimetro;
	
	void preencheRet(int inst){
		cout << "Informe a largura do retangulo " << inst << ": ";
		cin >> largura;
		cout << "Informe a altura do retangulo " << inst << ": ";
		cin >> altura;
	}
	void calculaArea(int inst){
		area = largura * altura;
		cout << "Area " << inst <<": " << area << endl;
	}
	void calculaPerimetro(int inst){
		perimetro = (largura*2)+(altura*2);
		cout << "Perimetro " << inst <<": " << perimetro << endl;
	}
};

int main(){
	Retangulo Ret1;
	Ret1.preencheRet(1);
	Ret1.calculaArea(1);
	Ret1.calculaPerimetro(1);
	return 0;
}
