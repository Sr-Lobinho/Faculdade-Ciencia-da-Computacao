#include <iostream>
using namespace std;

int imprimeA(int n){
	cout << n << " ";
	if (n == 10){
	
		return 1;
	}
	else{
		imprimeA(n+1);

		return n;	
	}
}

int imprimeB(int n){
	if (n == 10){
		return 10;
	}
	else{
		cout << imprimeB(n+1) << " ";
		return n;
	}
}

int main(){
	imprimeA(1);
	cout << endl << endl;
	cout << imprimeB(1) << endl;
  return 0;
}
