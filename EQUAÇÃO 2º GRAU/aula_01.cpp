#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char** argv) {
		// BASKARA (EQUACAO SEGUNDO GRAU)

	int a, b, c;
		cout << "Informe o valor de a:";
		cin >> a;
		
		cout << "Informe o valor de b:";
		cin >> b;
		
		cout << "Informe o valor de c:";
		cin >> c;
		
	int delta = (b*b)-4*a*c;
	
		cout << "Delta = " << delta << endl;
		
		float x1 = (b*(-1)-sqrt(delta))/(2*a);
		float x2 = (b*(-1)+sqrt(delta))/(2*a);
		
		if (delta == 0) {
			
			cout << "Somente 1 raiz | x1 = " << x1 << " e x2 " << x2;
		} else if (delta < 0) {
			cout << "Nao ha valores reais!";
		} else {
			cout << "x1 = " << x1 << " e x2 = " << x2;
		}
		
	return 0;
}