#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese el numero: ";
    cin >> n;

    int n1, n2, fib;
    n1 = n2 = fib = 1;
    if(n < 0)
        cout << "Valor incorrecto. Ingrese numeros mayores o iguales a CERO." << endl;
    else {
        for(int i = 1; i < n; i++) {
            fib = n1 + n2;
            n1 = n2;
            n2 = fib;
        }
        cout << "El fib de " << n << " es " << fib << endl;
    }
    return 0;
}