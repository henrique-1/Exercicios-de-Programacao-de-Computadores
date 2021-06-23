#include <stdio.h>
#include <math.h>

int main(void)
{
    //Declarando Variáveis
    int array[3][3];
    int somaC1 = 0;
    int somaC2 = 0;
    int somaC3 = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            array[i][j]=0;
        }   
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }   
    }

    //Soma Coluna 1
    somaC1 = array[0][0] + array[1][0] + array[2][0];
    printf("%d\n", somaC1);

    //Soma Coluna 2
    somaC2 = array[0][1] + array[1][1] + array[2][1];
    printf("%d\n", somaC2);

    //Soma Coluna 3
    somaC3 = array[0][2] + array[1][2] + array[2][2];
    printf("%d", somaC3);
}