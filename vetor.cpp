//Um programa que lê um vetor de números inteiros e imprime o maior valor do vetor

#include <iostream>
using namespace std;

int n;

int main() {

    cout << "Digite a quantidade de numeros: ";
    cin >> n;

    int vetor[n];

    for (int i = 0; i < n; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> vetor[i];
    }

    int maior = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    cout << "O maior valor do vetor e: " << maior << endl;

    return 0;
}