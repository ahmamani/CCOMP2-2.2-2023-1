// Comentario de una linea
/*
comentarios de 
varias
lineas
*/
/**
 * Implementar un programa que solicite por teclado un numero que 
 * representa la edad de una persona, e imprima si dicha edad 
 * pertecena a una persona mayor de edad.
 * 
*/
#include <iostream>

using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad por favor: ";
    cin >> edad;

    if(edad >= 18) {
        cout << "Usted es mayor de edad!!" << endl; 
    } else {
        cout << "Usted NO es mayor de edad!!" << endl; 
    }    

    return 0;
}