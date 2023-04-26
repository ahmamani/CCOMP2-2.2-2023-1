#include <iostream>

using namespace std;

/*
* n! = n * (n-1)!
* 0! = 1
*/
long long factorial(int n) {
    if(n == 0)
        return 1;
    return n * factorial(n-1);
}

int main() {
    int n;

    cout << "Ingrese el numero: ";
    cin >> n;

    cout << "El factorial de " << n << " es " << factorial(n) << endl;
    return 0;
}