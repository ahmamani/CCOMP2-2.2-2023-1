#include <iostream>

using namespace std;

int main() {
    /**
     * Implemente un programa que solicite por teclado un caracter
     * y verifique si el caracter es una letra ('a'-'z' , 'A' - 'Z')
    */    
    char n;

    cout << "Ingrese el caracter: ";
    cin >> n;

    int val = static_cast<int>(n);

    if( (val >= 65 && val <= 90) || (val >= 97 && val <= 122)) {
        cout << "El caracter ingresado es una letra!!!!" << endl;
    } else {
        cout << "El caracter ingresado NO ES UNA LETRA!!!!" << endl;
    }
    
    return 0;
}