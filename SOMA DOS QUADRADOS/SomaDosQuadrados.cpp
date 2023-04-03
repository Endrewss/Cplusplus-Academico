#include <iostream>

using namespace std;

	int quad1 (int n1){
		
		return n1*n1;
	}
	
	int quad2 (int n2){
		
		return n2*n2;
	}
	
	int somaQuad (int s1, int s2){
		
		return s1+s2;
	}

int main(int argc, char** argv) {
	
	cout << "***SOMA DOS QUADRADOS***" << "\n";
	cout << "\n";

	int num1, num2;
	cout << "Informe o valor do 1 quadrado: ";
	cin >> num1;
	
	cout << "\n";
	
	cout << "Informe o valor do 2 quadrado: ";
	cin >> num2;
	
	cout << "\n";
	
	cout << "Area do 1 quadrado: " << quad1(num1) <<"\n"; 
	cout << "Area do 2 quadrado: " << quad2(num2) <<"\n";
	int result1 = quad1(num1);
	int result2 = quad2(num2);
	
	
	cout << "\n";
	
	cout << "Soma dos Quadrados: " << somaQuad(result1, result2);
	
	return 0;
}
