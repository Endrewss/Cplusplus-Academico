#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	char palavra[10];
	int i, qnt;
	cout << "Digite uma palavra letra por letra, no máximo 10 letras." << "\n";
	cout << "Informe a quantidade de caracteres da palavra: ";
	cin >> qnt;
	
	for(i = 0; i < qnt; i++){
		cin >> palavra[i];
	}
	cout << endl;
	int j = qnt;
	cout << "Palavra invertida: " << endl;
	for(j = qnt-1; j >= 0; j-- ){
		cout << palavra[j] << endl;
	}
	return 0;
}
