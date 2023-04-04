#include <iostream>
#include <cstdlib>

using namespace std;

class Triangulo {
	
	public:
		
		int l1, l2, l3;
		
		bool VerifTriangulo(){
			
			if(l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){
				return 1;
			}
			
			return 0;
		}
		
		string tipoTriang(){
			
		if(VerifTriangulo() == 1){
			if(l1 == l2 && l2 == l3){
				return "Triangulo Equilatero;";
			} else if(l1 == l2 || l2 == l3 || l3 == l1){
				return "Triangulo Isosceles";
			} else{
				return "Triangulo Escaleno";
			}
		
		} else {
			return "Nao e Triangulo!";
		}
	}
};

int main(int argc, char** argv) {
	
	Triangulo tri;
	
	cout << "*** Tipos de Triangulo **** \n\n";
	
	cout << "Informe o primeiro lado do triangulo: ";
	cin >> tri.l1;
	
	cout << "\n";
	
	cout << "Informe o segundo lado do triangulo: ";
	cin >> tri.l2;
	
	cout << "\n";
	
	cout << "Informe o terceirro lado do triangulo: ";
	cin >> tri.l3;
	
	cout << "\n";
	
	cout << tri.tipoTriang();
	
	return 0;
}
