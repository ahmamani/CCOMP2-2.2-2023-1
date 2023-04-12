/**
 * Implemente un funcion que reciba un caracter
 * y retorne true si es una letra ('a'-'z' , 'A' - 'Z')
 * false caso contrario
*/ 
#include <iostream>

using namespace std;

bool esLetra(char car) {
    return ( (car >= 65 && car <= 90) || (car >= 97 && car <= 122));
}

bool esNumero(char car) {
    return (car >= 48 && car <= 57);
}

int main() {
    char n;

    cout << "Ingrese el caracter: ";
    cin >> n;

    cout << esLetra(n) << endl;
    
    return 0;
}