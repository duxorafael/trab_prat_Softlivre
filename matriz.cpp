//Calculadora de matriz que permita soma, subtração e multiplicação de duas matrizes

#include <iostream>
using namespace std;

int main() {
    int l1, c1, l2, c2;

    cout << "Linhas e colunas da matriz A: ";
    cin >> l1 >> c1;

    cout << "Linhas e colunas da matriz B: ";
    cin >> l2 >> c2;

    int A[10][10], B[10][10], R[10][10];

    cout << "Digite os elementos da matriz A:\n";
    for(int i = 0; i < l1; i++){
        for(int j = 0; j < c1; j++){
            cin >> A[i][j];
        }
    }

    cout << "Digite os elementos da matriz B:\n";
    for(int i = 0; i < l2; i++){
        for(int j = 0; j < c2; j++){
            cin >> B[i][j];
        }
    }

    int op;
    cout << "\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\nEscolha: ";
    cin >> op;

    if(op == 1 && l1 == l2 && c1 == c2){
        for(int i = 0; i < l1; i++){
            for(int j = 0; j < c1; j++){
                R[i][j] = A[i][j] + B[i][j];
            }
        }

        cout << "Resultado:\n";
        for(int i = 0; i < l1; i++){
            for(int j = 0; j < c1; j++){
                cout << R[i][j] << " ";
            }
            cout << endl;
        }
    }

    else if(op == 2 && l1 == l2 && c1 == c2){
        for(int i = 0; i < l1; i++){
            for(int j = 0; j < c1; j++){
                R[i][j] = A[i][j] - B[i][j];
            }
        }

        cout << "Resultado:\n";
        for(int i = 0; i < l1; i++){
            for(int j = 0; j < c1; j++){
                cout << R[i][j] << " ";
            }
            cout << endl;
        }
    }

    else if(op == 3 && c1 == l2){
        for(int i = 0; i < l1; i++){
            for(int j = 0; j < c2; j++){
                R[i][j] = 0;
                for(int k = 0; k < c1; k++){
                    R[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        cout << "Resultado:\n";
        for(int i = 0; i < l1; i++){
            for(int j = 0; j < c2; j++){
                cout << R[i][j] << " ";
            }
            cout << endl;
        }
    }

    else{
        cout << "Operacao nao possivel com essas matrizes.\n";
    }

    return 0;
}