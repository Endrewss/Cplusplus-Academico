#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	// Ano Bissexto
	
	int ano;
	cout << "Informe o ano: ";
	cin >> ano;
	
	if((ano %4 == 0) && (ano %100 != 0)){
		cout << "Ano e Bissexto";
	} else {
		cout <<"Ano nao e Bissexto";
	}
	
	return 0;
}
