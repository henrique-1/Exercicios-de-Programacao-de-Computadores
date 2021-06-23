#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(void)
{
    //Configurando Localização
    setlocale(LC_ALL, "Portuguese");
    
    //Declarando váriáveis
    int mes, ano;

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(mes > 12)
    {
        printf("O numero de meses digitados e incompativel.");
        printf("\nVlw. Flw vou fechar");
        exit(0);
    }

    switch(mes)
    {
        case 1:
            printf("\nJaneiro: ");
            printf("possui 31 dias");
        break;

        case 2:
            printf("\nFevereiro: ");
            if(((ano%4) == 0) && ((ano%100) != 0))
            {
                printf("possui 29 dias");
            }
            else
            {
                printf("possui 28 dias");
            }
        break;

        case 3:
            printf("\nMarco: ");
            printf("possui 31 dias");
        break;

        case 4:
            printf("\nAbril: ");
            printf("possui 30 dias");
        break;

        case 5:
            printf("\nMaio: ");
            printf("possui 31 dias");
        break;

        case 6:
            printf("\nJunho: ");
            printf("possui 30 dias");
        break;

        case 7:
            printf("\nJulho: ");
            printf("possui 31 dias");
        break;

        case 8:
            printf("\nAgosto: ");
            printf("possui 31 dias");
        break;

        case 9:
            printf("\nSetembro: ");
            printf("possui 30 dias");
        break;

        case 10:
            printf("\nOutubro: ");
            printf("possui 31 dias");
        break;

        case 11:
            printf("\nNovembro: ");
            printf("possui 30 dias");
        break;

        case 12:
            printf("\nDezembro: ");
            printf("possui 31 dias");
        break;
    }
}