#include <iostream>
#include <cstdlib>

using namespace std;

class Math {
	
	public:
		int a, b;
		int soma(){
			return a+b;
		}
		int sub(){
			return a-b;
		}
		int mult(){
			return a*b;
		}
		int div(){
			if(b != 0){
				return a/b;
			}
			return 0;
		}
};

int main(int argc, char** argv) {
	
	Math mat;
	int opcao;
	cout << "--------- Calculadora ---------- \n\n";
	cout << "Informe o primeiro valor: ";
	cin >> mat.a;
	cout << "\n";
	cout << "Informe o segundo valor: ";
	cin >> mat.b;
	cout << "\n";
	cout << "Escolha a operacao: \n 1 - Some \n 2 - Subtracao \n 3 - Multplicacao \n 4 - Divisao \n\n";
	cout << "Opcao: ";
	cin >> opcao;
	cout << "-------------------------------- \n\n";
	
	switch(opcao){
		
		case 1:
			cout << "Resultado da soma: ";
			cout << mat.soma();
			cout << "\n";
			break;
			
		case 2:
			cout << "Resultado da subtracao: ";
			cout << mat.sub();
			cout << "\n";
			break;
			
		case 3:
			cout << "Resultado da multiplicacao: ";
			cout << mat.mult();
			cout << "\n";
			break;
			
		case 4:
			cout << "Resultado da divisao: ";
			cout << mat.div();
			cout << "\n";
			break;
		
		default:
			cout << "Opcao nao existente!";
	}
	
	return 0;
}