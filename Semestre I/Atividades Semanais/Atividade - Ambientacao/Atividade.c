#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void)
{
    //Configurando Localização
    setlocale(LC_ALL, "Portuguese");


    //Declarando Variáveis
    float NotaP1;
    float NotaP2;
    float NotaP3;
    float Media;
    int Faltas;
    float Presenca;
    int QtdAulas;


    printf("Calculadora de Notas!");


    printf("\nDigite a nota da Primeira Prova: ");
    scanf("%f", &NotaP1);


    printf("\nDigite a nota da Segunda Prova: ");
    scanf("%f", &NotaP2);


    printf("\nDigite a nota da Terceira Prova: ");
    scanf("%f", &NotaP3);

    printf("\nDigite a Quantidade de Aulas: ");
    scanf("%d", &QtdAulas);

    printf("\nDigite a Quantidade de Faltas: ");
    scanf("%d", &Faltas);

    if(QtdAulas <= Faltas)
    {
        printf("\nInseriu a quantidade de faltas maior que a quantidade de Aulas");
        printf("\nO Programa está sendo finalizado :P");
        exit(0);
    }

    //Calculo da Média
    Media = (NotaP1 + NotaP2 + NotaP3)/3;


    printf("\nA Media Aritimetica Final e de: %.2f\n" , Media);
    
    //Calculo de Presenca
    Presenca = QtdAulas - Faltas;


    Presenca = (Presenca*100)/QtdAulas;


    printf("\nA Presenca e de: %.2f" , Presenca);


    
    if(4.00 <= Media && Media <= 9 && Presenca == 75.00)
    {
        //O Aluno vai para exame
        printf("\nVocê vai para Reavaliacao!\n");
        printf("\nCom a Media de %.2f e Presenca de %.2f", Media, Presenca);
    }
    else if(Media >= 6 && Presenca >= 75.00)
    {
        //O Aluno vai para exame
        printf("\nVocê foi Aprovado!\n");
        printf("\nCom a Media de %.2f e Presenca de %.2f", Media, Presenca);
    }
    else if (Media < 4.00)
    {
        //O aluno está reprovado
        printf("\n\nVocê foi Reprovado por Nota!\n");
        printf("\nCom a Media de %.2f e Presenca de %.2f", Media, Presenca);
    }
    else if(Presenca < 75.00)
    {
        //O aluno está reprovado
        printf("\n\nVocê foi Reprovado por Falta!\n");
        printf("\nCom a Media de %.2f e Presenca de %.2f", Media, Presenca);
    }


    return 0;
}