#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class CalculaRaiz
{
    public: 
    float delta, x1, x2;
    int a, b, c;

    float calculoDelta(int a, int b, int c)
    {
        delta = 0;
        delta = b*b - 4*a*c;

        cout << "O valor de delta e: " << delta << "\n";

        calculoRaiz1(a, b, delta);
        calculoRaiz2(a, b, delta);
        calculoRaizes(delta, x1, x2);
    }

    float calculoRaiz1(int a, int b, double delta)
    {
        x1 = 0;
        x1 = ((-b) + sqrt(delta))/(2*a);
        return x1;
    }

    float calculoRaiz2(int a, int b, float delta)
    {
        x2 = 0;
        x2 = ((-b) + sqrt(delta))/(2*a);
        return x2;
    } 

    float calculoRaizes(float delta, float x1, float x2)
    {
        if(delta <= -1)
        {
            cout << "NAO TEM RAIZ";
        }
        else if(delta >= 0.00)
        {
            if(x1 != x1)
            {
                if(x2 == x2)
                {
                    cout << "UMA RAIZ: " << x2;
                }
                else if(x2 != x2)
                {
                    cout << "NAO TEM RAIZ";
                }
            }
            else if(x1 == x1)
            {
                if(x2 == x2)
                {
                    if(x1 == x2)
                    {
                        cout << "\nUMA RAIZ: " << x1;
                    }
                    else
                    {
                        cout << "\nDUAS RAIZES: ";
                        cout << "\nPrimeira Raiz: " << x1;
                        cout << "\nSegunda Raiz: " << x2;
                    }
                }
                else if(x2 != x2)
                {
                    cout << "\nUMA RAIZ: " << x1;
                }
            }
        }
        return 0;
    }
};

int main()
{
    CalculaRaiz CalculaRaiz1;

    cout << "Digite o valor de A: \n";
    cout << "> ";
    cin >> CalculaRaiz1.a;

    cout << "Digite o valor de B: \n";
    cout << "> ";
    cin >> CalculaRaiz1.b;

    cout << "Digite o valor de C: \n";
    cout << "> ";
    cin >> CalculaRaiz1.c;

    CalculaRaiz1.calculoDelta(CalculaRaiz1.a, CalculaRaiz1.b, CalculaRaiz1.c);

    return 0;
}