#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	//Impar ou par?
	
	int valor;
	cout << "Informe um valor qualquer: ";
	cin >> valor;
	
	if(valor %2 == 0) {
		cout << "Valor informado e par";
	} else {
		cout << "Valor informado e impar";
	}
	
	return 0;
}
