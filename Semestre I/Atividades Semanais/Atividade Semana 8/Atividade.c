#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void)
{
    //Configurando Localização
    setlocale(LC_ALL, "Portuguese");
    
    //Declarando váriáveis
    int nLinhas;
    int linha = 1, coluna = 0;
    char Prontuario[10];

    printf("Digite quantas linhas voce quer que o programa escreva: ");
    scanf("%d", &nLinhas);

    printf("Qual o Prontuario do Aluno? ");
    scanf("%s", &Prontuario);

    while(linha <= nLinhas)
    {
        coluna = 0;
        while(coluna < linha)
        {
            printf("%s ", Prontuario);
            coluna++;
        }
        linha++;
        printf("\n");
    }
}