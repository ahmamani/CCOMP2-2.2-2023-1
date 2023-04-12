#include <iostream>

using namespace std;

long long fibo(int n) {
    long long n1, n2, fib;
    n1 = n2 = fib = 1;
    for(int i = 1; i < n; i++) {
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
    }
    return fib;
}

void imprimirNFibs(int n) {
    for(int i = 0; i < n; i++)
        cout << fibo(i) << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese el numero: ";
    cin >> n;    
    imprimirNFibs(n);
    //cout << "El fib de " << n << " es " << fibo(n) << endl;
    return 0;
}