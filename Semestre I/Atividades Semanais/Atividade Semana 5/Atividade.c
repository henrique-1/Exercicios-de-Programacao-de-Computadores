//Versão com o que foi ensinado até agora
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void)
{
    //Configurando Localização
    setlocale(LC_ALL, "Portuguese");

    //Declarando váriáveis da Seleção de Versão
    int Escolha;

    //Declarando Variáveis da Versão Complexa
    int Numero[3];

    //Declarando Variáveis da Versão Básica
    int Numero0, Numero1, Numero2;

    printf("Versoes Disponiveis\n");
    printf("Versao Complexa (1)\n");
    printf("Versao Basica (2)\n");
    printf("Qual versao deseja executar? ");
    scanf("%d", &Escolha);

    switch(Escolha)
    {
        case 1:

            for(int i = 0; i < 3; i++)
            {
                printf("Escreva o %d Numero: ", i + 1);
                scanf("%d", &Numero[i]);
            }

            for(int i = 0; i < 3; i++)
            {
                for(int j = i + 1; j < 3; j++)
                {
                    if(Numero[i] > Numero[j])
                    {
                        int a = Numero[i];
                        Numero[i] = Numero[j];
                        Numero[j] = a;
                    }
                }
            }

            printf("Os numeros, em ordem crescente sao: |");
            
            for(int i = 0; i < 3; i++)
            {
                printf(" %d |", Numero[i]);
            }

        break;

        case 2:

            printf("Escreva o 1 Numero: ");
            scanf("%d", &Numero0);
            
            printf("Escreva o 2 Numero: ");
            scanf("%d", &Numero1);

            printf("Escreva o 3 Numero: ");
            scanf("%d", &Numero2);
            if(Numero0 != Numero1 && Numero0 != Numero2 && Numero1 != Numero2)
            {
                if(Numero0 < Numero1 && Numero0 < Numero2 && Numero1 < Numero2)
                {
                    printf("Os numeros em ordem crescente sao: | %d | %d | %d |", Numero0, Numero1, Numero2);
                }
                else if(Numero0 < Numero2 && Numero0 < Numero1 && Numero2 < Numero1)
                {
                    printf("Os numeros em ordem crescente sao: | %d | %d | %d |", Numero0, Numero2, Numero1);
                }
                else if(Numero1 < Numero0 && Numero1 < Numero2 && Numero0 < Numero2)
                {
                    printf("Os numeros em ordem crescente sao: | %d | %d | %d |", Numero1, Numero0, Numero2);
                }
                else if(Numero1 < Numero0 && Numero1 < Numero2 && Numero2 < Numero0)
                {
                    printf("Os numeros em ordem crescente sao: | %d | %d | %d |", Numero1, Numero2, Numero0);
                }
                else if(Numero2 < Numero0 && Numero2 < Numero1 && Numero0 < Numero1)
                {
                    printf("Os numeros em ordem crescente sao: | %d | %d | %d |", Numero2, Numero0, Numero1);
                }
                else
                {
                    printf("Os numeros em ordem crescente sao: | %d | %d | %d |", Numero2, Numero1, Numero0);
                }
            }
            else
            {
                printf("Os numeros sao iguais | %d | %d | %d |", Numero0, Numero1, Numero2);
            }

        break;
    }
}