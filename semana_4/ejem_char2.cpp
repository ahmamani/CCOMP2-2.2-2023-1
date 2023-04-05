#include <iostream>

using namespace std;

int main() {
    /**
     * Implemente un programa que reciba 2 caracteres, los cuales 
     * deben ser caracteres que represente un digito e imprima
     * la suma de dichos digitos.
    */    
    char n1, n2;
    cout << "Ingrese el primer caracter: ";
    cin >> n1;
    cout << "Ingrese el segundo caracter: ";
    cin >> n2;

    int val1 = static_cast<int>(n1);
    int val2 = static_cast<int>(n2);

    if( (val1 <= 48 || val1 >= 57) && (val2 <= 48 || val2 >= 57)) {
        cout << "Uno de los caracteres ingresados no es un numero!!!!" << endl;
    } else {
        cout << (val1-'0') + (val2-'0') << endl;
    }
    
    return 0;
}