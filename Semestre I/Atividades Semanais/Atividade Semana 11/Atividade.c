#include <stdio.h>
#include <stdlib.h>

int CalculaMaior(int numeros[5])
{
    //Declarando Variáveis
    int maior = 0;

    for ( int i = 0; i < 5; i ++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }
    printf("MAIOR: %d", maior);
    return 0;
}

int CalculaMenor(int numeros[5])
{
    //Declarando Variáveis
    int menor = numeros[0];

    for ( int i = 0; i < 5; i ++)
    {
    // Aqui voce faze o seguinte
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
    printf("\nMENOR: %d", menor);
    return 0;
}

int CalculaMedia(int soma)
{
    //Declarando Variáveis
    int media = 0;

    media = (soma)/5;

    printf("\nMEDIA: %d", media);
    return 0;
}

int CalculaSoma(int numeros[5])
{
    //Declarando Variáveis
    int soma = 0;

    for(int i = 0; i < 5; i++)
    {
        soma = soma + numeros[i];
    }

    printf("\nSOMA: %d", soma);

    //Chamando outras funções
    CalculaMedia(soma);

    return soma;
}

int main(void)
{
    //Declarando Variáveis
    int numeros[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &numeros[i]);
        if(numeros[i] < 0)
        {
            exit(0);
        }
    }

    //Chamando outras funções
    CalculaMaior(numeros);
    CalculaMenor(numeros);
    CalculaSoma(numeros);
}