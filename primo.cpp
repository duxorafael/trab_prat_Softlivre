//O programa deve ler um número inteiro da entrada padrão (teclado) e imprimir na tela “Primo” ou “Não é primo”

#include <iostream>
using namespace std;
int num;

int main() {

    bool primo = true;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    if (num <= 1){
        primo = false;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo){
        cout << "Primo";
    } else {
        cout << "Nao e primo";
    }

    return 0;
}