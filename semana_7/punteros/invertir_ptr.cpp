#include <iostream>

using namespace std;

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}
void intercambio2(int *a, int*b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void invertirIter(int* ini, const int tam) {
    int *fin = (ini + tam -1);
    while(ini<fin) {
        intercambio2(ini++, fin--);
    }
}

void invertirRec(int *ini, int *fin) {
    if(ini>=fin)
        return;
    intercambio2(ini, fin);
    invertirRec(++ini, --fin);
}

void print(int *arr, int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++, arr++)
        cout << *arr << " ";
    cout << "]" << endl;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int tam = sizeof(arr) / sizeof(arr[0]);

    invertirIter(arr, tam);
    print(arr, tam);
    invertirRec(arr, arr+tam-1);
    print(arr, tam);
    return 0;
}
