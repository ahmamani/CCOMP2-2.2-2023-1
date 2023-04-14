/**
 * Implemente una funcion que reciba un numero e 
 * retorne la cantidad de digitos que tiene.
 * Por ejm: 123545
 * debe retornar -> 6
*/
#include <iostream>

using namespace std;

int contarDigitosDeNumero(long long n) {
    int cont = 0;
    while(n > 0) {
        n /= 10;
        cont++;
    }
    return cont;
}

int main() {
    cout << contarDigitosDeNumero(1000000) << endl;

    return 0;
}