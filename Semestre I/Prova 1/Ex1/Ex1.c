#include <stdio.h>
int main(void)
{
    //Declarando váriáveis
    int nLinhas, linha, coluna;

    scanf("%d", &nLinhas);


    for(linha=0; linha<nLinhas; linha++)
    {
        for(coluna=nLinhas; coluna>linha; coluna--)
        {
            printf("*");
        }
        printf("\n");
    }

}