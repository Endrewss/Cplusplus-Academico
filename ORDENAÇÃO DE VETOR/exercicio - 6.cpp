#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	
	cout << "***ORDENACAO DE VETOR***" << "\n";
	
	int v[8], i, j, aux;
	
	for(i=0; i<8; i++){
		cout << "Vetor " << i << ": ";
		cin >> v[i];
	}
	
	for(i=0; i<8; i++){
			for(j=i+1; j<8; j++){
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	cout << "\n";
	cout << "Organizacao dos numeros: " << "\n";
	
	for(i=0; i<8; i++){
		cout << v[i] << "\n";
	}
	
	return 0;
}
