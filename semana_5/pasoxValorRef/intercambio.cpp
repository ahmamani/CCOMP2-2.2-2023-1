#include <iostream>

using namespace std;

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
    cout << "valor de a en intercambio es " << a << endl;
    cout << "valor de b en intercambio es " << b << endl;
}

int main() {
    int q = 3;
    int r = 5;
    intercambio(q, r);
    cout << "valor de q en main es " << q << endl;
    cout << "valor de r en main es " << r << endl;
    
    return 0;
}