#include <iostream>
#include <stdio.h>

using namespace std;

class Calculadora
{
    public: 
    float Atributo1, Atributo2;

    float Soma(float Atributo1, float Atributo2);

    float Subtracao(float Atributo1, float Atributo2);

    float Multiplicacao(float Atributo1, float Atributo2);

    float Divisao(float Atributo1, float Atributo2);
};

float Calculadora::Soma(float Atributo1, float Atributo2)
{
    float Soma;

    Soma = Atributo1 + Atributo2;

    return Soma;
}

float Calculadora::Subtracao(float Atributo1, float Atributo2)
{
    float Subtracao;

    Subtracao = Atributo1 - Atributo2;

    return Subtracao;
}

float Calculadora::Multiplicacao(float Atributo1, float Atributo2)
{
    float Multiplicacao;

    Multiplicacao = Atributo1 * Atributo2;

    return Multiplicacao;
}

float Calculadora::Divisao(float Atributo1, float Atributo2)
{
    float Divisao;

    Divisao = (Atributo1/Atributo2);

    return Divisao;
}

int main()
{
    Calculadora Calculadora1;

    cin >> Calculadora1.Atributo1;
    cin >> Calculadora1.Atributo2;

    Calculadora1.Soma(Calculadora1.Atributo1, Calculadora1.Atributo2);
    Calculadora1.Subtracao(Calculadora1.Atributo1, Calculadora1.Atributo2);
    Calculadora1.Multiplicacao(Calculadora1.Atributo1, Calculadora1.Atributo2);
    Calculadora1.Divisao(Calculadora1.Atributo1, Calculadora1.Atributo2);

    return 0;
}