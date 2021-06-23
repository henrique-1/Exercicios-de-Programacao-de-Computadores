#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string nome;

    cout << "Digite um nome: \n";
    cout << "> ";
    cin >> nome;

    for(int i = 0; i < 100; i++)
    {
        cout << "\n" << nome;
        
        if(nome == "PRCE2")
        {
            cout << " - Igual";
        }
        else
        {
            cout << " - Diferente";
        }
    }

    return 0;
}