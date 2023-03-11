#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	// area do triangulo
	
	int h;
	cout << "Informe a altura do triangulo: ";
	cin >> h;
	
	int b;
	cout << "Informe a base do triangulo: ";
	cin >> b;

	
	float area = h*b/2;
	
	cout << "Area do triangulo = " << area;
	 
	return 0;
}
