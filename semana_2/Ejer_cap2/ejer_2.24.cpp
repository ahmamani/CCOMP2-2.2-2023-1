#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if ( !(num1 % 2) )
        cout << "El primer numero PAR" << endl;
    else
        cout << "El primer numero IMPAR" << endl;
    
    if (num2 % 2 == 0)
        cout << "El segundo numero PAR" << endl;
    else
        cout << "El segundo numero IMPAR" << endl;

    if ( (num1 + num2) % 2 == 0)
        cout << "La suma de los numeros es PAR" << endl;
    else
        cout << "La suma de los numeros es IMPAR" << endl;

    return 0;
}
