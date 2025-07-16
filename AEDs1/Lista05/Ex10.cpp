#include <iostream>
using namespace std;

struct Vetor{
	float x;
	float y;
	float z;
	
	void preencheVet(char inst){
		cout << "Informe a coordenada x do Vetor " << inst << ": ";
		cin >> x;
		cout << "Informe a coordenada y do Vetor " << inst << ": ";
		cin >> y;
		cout << "Informe a coordenada z do Vetor " << inst << ": ";
		cin >> z;
	}
	void calculaEscalar(Vetor &VB){
		float escalar;
		escalar = (x*VB.x) + (y*VB.y) + (z*VB.z);
		cout << "Escalar entre o Vetor A e o Vetor B: " << escalar << endl;
	}
	
	
};

int main(){
	Vetor VA, VB;
	VA.preencheVet('A');
	VB.preencheVet('B');
	VA.calculaEscalar(VB);
	return 0;
}
