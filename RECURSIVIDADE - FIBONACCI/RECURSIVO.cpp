#include <iostream>

using namespace std;

int fibonacci(int n);

int main(int argc, char *argv[]){
	
	cout << "*** Recursividade - Fibonacci ***\n";
	
    int x;
    cout << "Informe o numero de vezes que fibonacci irá calcular: ";
    cin >> x;
    
    for(int i = 1; i <= x; i++)
        cout << fibonacci(i) << "\n"; 
   
    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
