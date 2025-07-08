#include <iostream>
using namespace std;

void calculaTerra(int **terreno, int lin, int col, int ter){
	int terra =0;
	for (int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			if(j > 2 and i > 1){
				terra += (terreno[i][j] - ter);
				//cout << terra << endl;
			}
		}
	}
	cout << "Terra que sera retirada: " << terra << endl;
}



int main(){
	int lin = 6;
    int col = 6;
    int** terreno = new int*[lin];
    for (int i = 0; i < lin; i++) {
        terreno[i] = new int[col];
    }
	 int valores[6][6] = {
        {1, 3, 3, 5, 6, 7},
        {2, 1, 2, 5, 7, 9},
        {2, 4, 5, 9, 2, 15},
        {5, 8, 8, 2, 13, 12},
        {5, 6, 5, 8, 14, 16},
        {5, 5, 7, 12, 14, 15}
    };
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            terreno[i][j] = valores[i][j];
        }
    }
	calculaTerra(terreno,lin,col,10);
	calculaTerra(terreno,lin,col,11);
	return 0;
}
