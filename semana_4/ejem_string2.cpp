#include <iostream>

using namespace std;

/**
 * Implemente un programa que solicite por teclado el ingreso de
 * una cadena que contenga unicamente numeros e imprima la suma
 * de todos los digitos.
 *   Para la entrada "1234"
 *   imprimira -> 10
*/
int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    cin >> cadena;
    
    int suma = 0;
    for(int i = 0; i < cadena.length(); i++) {
        suma += (cadena.at(i) - '0');
    }
    cout << "La suma es " << suma << endl;
    return 0;
}