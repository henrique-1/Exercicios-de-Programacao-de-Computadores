#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int matriz[2][2], vet[0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Digite a entrada da matriz na posicao [" << i << "] [" << j << "] : ";
            cin >> matriz[i][j];
        }
    }

    vet[0] = (matriz[0][0] + matriz[0][1]) + (matriz[1][0] + matriz[1][1]);
    cout << "\nSoma das linhas 1 e 2 = " << vet[0];

    return 0;
}
