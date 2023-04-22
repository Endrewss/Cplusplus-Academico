#include <iostream>
#include <cstdlib>

using namespace std;

bool VerificacaoNumeroPrimo(int n) {
    int c = 0;
    for (int aux = 1; aux <= n; aux++) {
        if (n % aux == 0) {
            c++;
        }    
    }
    if (c > 2) {
        return 0;
    } else {
        return 1;
    } 
}


int main(int argc, char** argv) {
    
    cout << "***VERIFICACAO DE NUMERO PRIMO***" << "\n";
    cout << "\n";
    
    int num;
    cout << "Escolha um numero: ";
    cin >> num;
    
    cout << "\n";
    
    cout << "1 = Primo | 0 = Nao Primo" << "\n";
    
    cout << "\n";
    
    cout << "Return " << VerificacaoNumeroPrimo(num);
    
    return 0;
}
