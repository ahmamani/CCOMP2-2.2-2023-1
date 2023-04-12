/**
 * Implemente una funcion que reciba como argumento
 * una cadena y un caracter y retorne la cantidad de veces 
 * que el caracter este presente en dicha cadena.
*/
#include <iostream>

using namespace std;

int contarCharEnString(string cad, char car) {
    int contador = 0;
    for(int i = 0; i < cad.length(); i++) {
        if(car == cad.at(i)) {
            contador++;
        } 
    }
    return contador;
}

/**
 * Implemente una funcion que reciba una cadena de caracteres y 
 * retorne el numero total de digitos que tenga dicha cadena
 * Por ejm. "asdf2134a4dssds"
 *      2, 1, 3, 4, 4, debe retornar 5
*/
bool esNumero(char car) {
    return (car >= 48 && car <= 57);
}
int contarNumEnString(string cad) {
    int contador = 0;
    for(int i = 0; i < cad.length(); i++) {
        if( esNumero(cad.at(i)) ) {
            contador++;
        } 
    }
    return contador;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    cin >> cadena;
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;
    
    cout << "El caracter " << caracter << " se repite " << 
            contarCharEnString(cadena, caracter) << " veces." << endl;
    
    return 0;
}