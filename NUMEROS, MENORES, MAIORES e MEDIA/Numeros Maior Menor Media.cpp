#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    // Numero Maior ou Menor e Media aritmedica
    int vet[4], i, maior, menor, media, soma = 0;
    
    for(i = 0; i < 4; i++){
        cout << "Informe " << i+1 << " um numero: ";
        cin >> vet[i];
    }
    
    maior = vet[0];
    for(i = 1; i < 4; i++) {
        if(vet[i] > maior) {
            maior = vet[i];
        }
    }
    
    menor = vet[0];
    for(i = 1; i < 4; i++) {
        if(vet[i] < menor) {
            menor = vet[i];
        }
    }
    
    for(i = 0; i < 4; i++){
        soma = soma + vet[i];
    }
    
    media = soma / 4;
    
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
    cout << "Valor da media aritmetica: " << media << endl;
    
    return 0;
}
