#include <iostream>

using namespace std;

	float Celsius(float f){
		
		return (f - 32)*5/9;
	}
	
	float Fahrenheit(float c){
		
		return (c * 9/5)+32;
	}

int main(int argc, char** argv) {
	
	cout << "***Fahrenheit e Celsius***" <<"\n";
	
	float grau;
	int opcao;
	cout << "Escolha uma opcao" << "\n";
	cout << "\n";
	cout << "1 - Celsius" << "\n";
	cout << "2 - Fahrenheit" << "\n";
	cout << "Opcao: ";
	cin >> opcao;
	cout << "\n";
	cout << "Informo grau desejado: ";
	cin >> grau;
	
	switch(opcao){
		
		case 1:
			cout << "Graus em Celsius: " << Celsius(grau) << "\n";
			break;
			
		case 2:
			cout << "Graus em Fahrenheit: " << Fahrenheit(grau) << "\n";
			break;
	}
	
	return 0;
}
