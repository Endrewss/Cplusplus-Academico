#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	// Tipos de Triangulo
	
	float lado1;
	cout << "Informe o 1 lado do triangulo: ";
	cin >> lado1;
	
	float lado2;
	cout << "Informe o 2 lado do triangulo: ";
	cin >> lado2;
	
	float lado3;
	cout << "Informe o 3 lado do triangulo: ";
	cin >> lado3;
	
	if((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3)){
		cout << "Triangulo escaleno";
	} else if((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3)){
		cout << "Triangulo equilatero";
	} else {
		cout << "Triangulo isosceles";
	}
	
	return 0;
}
