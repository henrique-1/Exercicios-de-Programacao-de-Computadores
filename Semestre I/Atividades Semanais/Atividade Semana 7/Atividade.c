#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void)
{
    //Configurando Localização
    setlocale(LC_ALL, "Portuguese");
    
    //Declarando váriáveis
    int nLinhas, linha, coluna;

    printf("Digite quantas linhas você quer que o programa escreva: ");
    scanf("%d", &nLinhas);

    for(linha=0; linha<nLinhas; linha++)
    {
        for(coluna=0; coluna<=linha; coluna++)
        {
            printf("*");
        }
        printf("\n");
    }
}