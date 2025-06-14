#include <iostream>
using namespace std;

void temperatura(){
	float maior = 0, menor = 0, media = 0, temp = 0;
	int opt = 0;
	cout << "Informe quantas temperaturas deseja usar: ";
	cin >> opt;
	
	for (int i = 1; i <= opt; i++){
		cout << "Informe a temperatura " << i << ": ";
		cin >> temp;
		
		if (i == 1){
			maior = temp;
			menor = temp;
		}
		else if(temp >= maior){
			maior = temp;	
		}
		else if (temp <=menor){
			menor = temp;
		}
		media += temp;
	}
	media /= opt;
	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;
	cout << "Media: " << media << endl;
	
}
int main(){
	temperatura();
	return 0;
}
