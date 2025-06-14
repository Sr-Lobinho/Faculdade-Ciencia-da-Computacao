#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int h, m, s, resto = 0;
	
	cout << "Informe a duracao em segundos: ";
	cin >> s;
	
	h = s/3600;
	resto = s%3600;
	m = resto/60;
	resto %= 60;
	
	cout << "O evento durou " << h << " horas, " << m << " minutos e " << resto << " segundos. (" << s << ")";
	
	
	return 0;
}
