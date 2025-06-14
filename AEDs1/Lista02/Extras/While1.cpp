#include <iostream>
using namespace std;

void imprimaMensagem(int q){
	int i = 1;
	while(i <= q){
		cout << "Ola mundo" << endl;
		i++;
		
	}	
}
int main(int argc, char** argv) {
	int q = 0;
	cout << "Quantos olas: ";
	cin >> q;
	imprimaMensagem(q);
	
	return 0;
}
