#include <iostream>

using namespace std;

/**
 * Implemente un programa que solicite por teclado el ingreso de
 * una cadena y un caracter. Posteriormente el programa debe
 * imprimir la cantidad de veces que el caracter este presente
 * en dicha cadena.
*/
int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    cin >> cadena;
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    int contador = 0;
    for(int i = 0; i < cadena.length(); i++) {
        if(caracter == cadena.at(i)) {
            contador++;
        } 
    }
    
    cout << "El caracter " << caracter << " se repite " << 
            contador << " veces." << endl;
    
    return 0;
}