#include <stdio.h>
#include <string.h>
int main()
{
    //Declarando Variáveis
    struct pessoa{
        char nome[255];
        int idade;
    };
    struct pessoa Pessoas[3];

    //Escaneia o Nome e Idade
    for(int i = 0; i < 3; i++)
    {
        scanf("%s", Pessoas[i].nome);
        scanf("%d", &Pessoas[i].idade);
    }

    //Declarando Variáveis de Cálculo
    int maior = 0;
    char nomeMaior[255];
    int menor = 1000;
    char nomeMenor[255];
    int media = 0;
    int soma = 0;
    //


    //Calcula Média
        //Primeiro Calcula-se a Soma
        for(int i = 0; i < 3; i++)
        {
            soma = soma + Pessoas[i].idade;
        }
        //Calcula a Média
        media = (soma)/3;
        printf("media: %d", media);

    //Calcula Maior
    for ( int i = 0; i < 3; i++)
    {
        if (Pessoas[i].idade > maior)
        {
            maior = Pessoas[i].idade;
            
            for(int j = strlen(Pessoas[i].nome); j >= 0; j--)
            {
                nomeMaior[j] = Pessoas[i].nome[j];
            }
        }
        
    }

    printf("\nmaior: %d nome: %s", maior, nomeMaior);

    //Calcula Menor
    for (int i = 0; i < 3; i++)
    {
        if (Pessoas[i].idade < menor)
        {
            menor = Pessoas[i].idade;

            for(int j = strlen(Pessoas[i].nome); j >= 0; j--)
            {
                nomeMenor[j] = Pessoas[i].nome[j];
            }
        }
    }

    printf("\nmenor: %d nome: %s", menor, nomeMenor);
}