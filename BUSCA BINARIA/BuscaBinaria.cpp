#include <cstdlib>
#include <iostream>

using namespace std;

void ordem(int zawarudo[], int tamanho) {
    int aux = 0;
    for(int i = 0; i < tamanho; i++) {
        for(int j = i + 1; j < tamanho; j++) {
            if(zawarudo[i] > zawarudo[j]) {
                aux = zawarudo[i];
                zawarudo[i] = zawarudo[j];
                zawarudo[j] = aux;
            }
        }
    }
}

int binarioProcura(int zawarudo[], int inicio, int fim, int valor) {
    int i = (inicio + fim) / 2;
    if(inicio > fim) {
        return -1;
    }
    if(zawarudo[i] == valor) {
        return i;
    }
    if(zawarudo[i] < valor) {
        return binarioProcura(zawarudo, i + 1, fim, valor);
    } 
    else {
        return binarioProcura(zawarudo, inicio, i - 1, valor);
    } 
}

int main(int argc, char *argv[]) {
    int tamanho;
    cout << "Insira o tamanho do array" << endl;
    cin >> tamanho;
    int zawarudo[tamanho];
    for(int i = 0; i < tamanho; i++) {
        cout << "Insira o valor do vetor " << i << endl;
        cin >> zawarudo[i];
    }
    ordem(zawarudo, tamanho);
    for(int i = 0; i < tamanho; i++) {
        cout << "----> " << zawarudo[i] << endl;
    }
    int valor;
    cout << "Insira o valor que deseja achar" << endl;
    cin >> valor;
    cout << "O valor " << valor << " esta no indice " << binarioProcura(zawarudo, 0, tamanho - 1, valor) << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}