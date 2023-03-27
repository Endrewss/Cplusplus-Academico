#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    cout << "***PARES, IMPARES, PERCENTUAL E MEDIA***" << endl;
    
    int v[12], i, soma = 0, media;
    double porcentagem, c = 0;
    cout << "Digite 12 numeros: " << endl;
    
    for (i = 0; i < 12; i++) {
        cout << "Numero: ";
        cin >> v[i];    
    }
    
    cout << endl;
    
    cout << "Identificacao de Pares e Impares: " << endl;
    
    for (i = 0; i < 12; i++) {
        if (v[i] % 2 == 0) {
            cout << v[i] << " - Par" << endl;
            c++;
        } else {
            cout << v[i] << " - Impar" << endl;
        }
    }
    
    for (i = 0; i < 12; i++) {
        soma = soma + v[i];
    }
    
    porcentagem = (12 - c) / 12.0 * 100.0;
    media = soma / 12;
    
    cout << endl;
    
    cout << "Quantidade de Pares: " << c << endl;
    cout << "Porcentagem de Pares: " << porcentagem << "%" << endl;
    cout << "Media: " << media;
    
    return 0;
}
