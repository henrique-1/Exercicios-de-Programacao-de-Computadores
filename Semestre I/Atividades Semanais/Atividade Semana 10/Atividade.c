#include <stdio.h>
#include <math.h>

float CalculaRaizes(int a, int b, float delta)
{
    //Declarando Variáveis
    float x1 = 0;
    float x2 = 0;

    //Calcula X1
    x1 = ((-b) + sqrt(delta))/(2*a);
    
    //Calcula X2
    x2 = ((-b) - sqrt(delta))/(2*a);

    if(delta <= -1)
    {
        printf("NAO TEM RAIZ");
    }
    else if(delta >= 0.00)
    {
        if(x1 != x1)
        {
            if(x2 == x2)
            {
                printf("UMA RAIZ: %.2f", x2);
            }
            else if(x2 != x2)
            {
                printf("NAO TEM RAIZ");
            }
        }
        else if(x1 == x1)
        {
            if(x2 == x2)
            {
                if(x1 == x2)
                {
                    printf("UMA RAIZ: %.2f", x1);
                }
                else
                {
                    printf("DUAS RAIZES: %.2f e %.2f", x1, x2);
                }
            }
            else if(x2 != x2)
            {
                printf("UMA RAIZ: %.2f", x1);
            }
        }
    }
    return 0;
}

float calculoDelta(int a, int b, int c)
{
    float delta = 0;
    //Calcula Delta
    delta = b*b - 4*a*c;
    
    //Envia os dados para uma função de Calcular a Raiz
    CalculaRaizes(a, b, delta);
    return delta;
}

int main(void)
{
    //Declarando Variáveis
    int a = 0, b = 0, c = 0;
    //printf("Digite o valor de A: ");
    scanf("%d", &a);

    //printf("Digite o valor de B: ");
    scanf("%d", &b);

    //printf("Digite o valor de C: ");
    scanf("%d", &c);

    //Envia os dados para uma função de Calcular o Delta
    calculoDelta(a, b, c);
    return 0;
}