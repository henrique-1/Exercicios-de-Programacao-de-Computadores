#include <stdio.h>

int media(int numAlunos){

  int i;
  float soma = 0, bolsa = 0, media = 0;

    for (i=1;i<=numAlunos;i++)
    {

        printf("Valor do aluno %d: ", i);
        scanf("%f", &bolsa);

        soma = soma + bolsa;
    }
    media = soma/numAlunos;
    return media;
}

 

int main()
{
    int num, numAlunos;

    printf("Quantos alunos? ");
    scanf("%d", &num);

    if(num <= 5)
    {
        numAlunos = num;
        float bolsa = media(numAlunos);

        printf("Media: %.2f", bolsa);
    }
    else
    {
        return 0;
    }

    return 0;
}