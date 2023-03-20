#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	// Idade
	
	int idade;
	cout << "Informe a idade: ";
	cin >> idade;
	
	if(idade <= 11) {
		cout << "Crianca";
	} else if (idade <= 17){
		cout << "Adolescente";
	} else if(idade <= 49) {
		cout << "Adulto";
	} else {
		cout << "Idoso";
	}
		
	return 0;
}
