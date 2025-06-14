#include <iostream>
using namespace std;

void mediaCD(){
	int cds = 0, count = 1;
	float valor = 0, media = 0;
	
	cout << "Informe quantos cds voce tem: ";
	cin >> cds;
	
	while (count <= cds){
		
		cout << "Informe o valor do cd " << count << ": ";
		cin >> valor;
		media += valor;
		count ++;
	}
	media /= cds;
	cout << "A media do valor dos cds e: " << media << endl;
}

int main(){
	mediaCD();
	return 0;
}
