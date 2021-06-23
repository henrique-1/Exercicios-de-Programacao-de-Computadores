#include <stdio.h>
int main(void)
{
    //Declarando Variáveis
    float Prova1, Prova2, Prova3, Media, TrabalhoFinal;
    int PontoExtra;

    scanf("%f.2", &Prova1);
    scanf("%f.2", &Prova2);
    scanf("%f.2", &Prova3);
    scanf("%f.2", &TrabalhoFinal);
    scanf("%d", &PontoExtra);

    if(PontoExtra > 1)
    {
        PontoExtra = 1;
    }

    Media = (Prova1*0.3 + Prova2*0.3 + Prova3*0.4)*0.7 + TrabalhoFinal*0.3 + PontoExtra;
    if(Media > 10)
    {
        Media = 10;
    }
    printf("%.2f", Media);
}