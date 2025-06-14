float mediaIdade(){
	float count = 0, soma = 0, idade = 0;
	
	while (true){
		cout << "Informe a idade da pessoa " << count << "(Ou pare o programa informando um valor negativo): ";
		cin >> idade;
		if (idade < 0){
			break;
		}
		soma += idade;
		count ++;
	}
	
	return (soma/count);
}

int main(){
	float media = 0.0;
	
	media = mediaIdade();
	
	if (media > 60){
		cout << "A turma e idosa." << " Media:" << media << endl;
	}
	else if (media > 25){
		cout << "A turma e adulta." << " Media: " << media << endl;
	}
	else if (media >= 0){
		cout << "A turma e jovem." << " Media: " << media << endl;
	}
	
	
	return 0;
}
