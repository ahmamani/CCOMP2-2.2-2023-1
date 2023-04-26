#include <iostream>

using namespace std;

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b; 
    b = tmp;
}

void invertir(int arr[], const int tam) {
    for(int i = 0; i < tam/2; i++)
        intercambio(arr[i], arr[tam-i-1]);
}

void invertirRec(int arr[], int tam, int ini=0) {
    if(ini>=tam)
        return;
    intercambio(arr[ini], arr[tam-1]);
    invertirRec(arr, --tam, ++ini);
}

void print(const int arr[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << " ]";
}

int main() {
    int arr[] = {1,2,3,8,7,4};
    invertir(arr, 6);
    print(arr, 6);
    invertirRec(arr, 6);
    print(arr, 6);
    return 0;
}
