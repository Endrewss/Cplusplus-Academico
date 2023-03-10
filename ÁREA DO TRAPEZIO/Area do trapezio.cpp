#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	//area do trapezio
	
	int B;
	cout << "Informe a base maior: ";
	cin >> B;
	
	int b;
	cout << "Informe a base menor: ";
	cin >> b;
	
	int h;
	cout << "Informe a altura: ";
	cin >> h;
	
	float area = (B+b)*h/2;
	
	cout << "Area do trapezio = " << area;
	
	
	return 0;
}
