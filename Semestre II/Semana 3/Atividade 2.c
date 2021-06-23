#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <locale.h>

float CalculaRaizes(int a, int b, float delta)
{
    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Salva as informações atuais de cor
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    setlocale(LC_ALL,"Portuguese");

    //Declarando Variáveis
    float x1 = 0;
    float x2 = 0;

    //Calcula X1
    x1 = ((-b) + sqrt(delta))/(2*a);
    
    //Calcula X2
    x2 = ((-b) - sqrt(delta))/(2*a);

    if(delta <= -1)
    {
        SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf("NAO TEM RAIZ");
        SetConsoleTextAttribute(h, wOldColorAttrs);
    }
    else if(delta >= 0.00)
    {
        if(x1 != x1)
        {
            if(x2 == x2)
            {
                SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                printf("UMA RAIZ: %.2f", x2);
                SetConsoleTextAttribute(h, wOldColorAttrs);
            }
            else if(x2 != x2)
            {
                SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
                printf("NAO TEM RAIZ");
                SetConsoleTextAttribute(h, wOldColorAttrs);
            }
        }
        else if(x1 == x1)
        {
            if(x2 == x2)
            {
                if(x1 == x2)
                {
                    SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                    printf("UMA RAIZ: %.2f", x1);
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                }
                else
                {
                    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                    printf("DUAS RAIZES: %.2f e %.2f", x1, x2);
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                }
            }
            else if(x2 != x2)
            {
                SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                printf("UMA RAIZ: %.2f", x1);
                SetConsoleTextAttribute(h, wOldColorAttrs);
            }
        }
    }
    return 0;
}

float calculoDelta(int a, int b, int c)
{
    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
    
    //Salva as informações atuais de cor
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    setlocale(LC_ALL,"Portuguese");

    float delta = 0;
    //Calcula Delta
    delta = b*b - 4*a*c;

    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n\nDELTA: %.2f\n", delta);
    SetConsoleTextAttribute(h, wOldColorAttrs);
    
    //Envia os dados para uma função de Calcular a Raiz
    CalculaRaizes(a, b, delta);
    return delta;
}

int main(void)
{
    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
    
    //Salva as informações atuais de cor
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    setlocale(LC_ALL,"Portuguese");

    //Declarando Variáveis
    int a = 0, b = 0, c = 0;

    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("Digite o valor de A: ");
    SetConsoleTextAttribute(h, wOldColorAttrs);
    scanf("%d", &a);

    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Digite o valor de B: ");
    SetConsoleTextAttribute(h, wOldColorAttrs);
    scanf("%d", &b);

    SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("Digite o valor de C: ");
    SetConsoleTextAttribute(h, wOldColorAttrs);
    scanf("%d", &c);

    //Envia os dados para uma função de Calcular o Delta
    calculoDelta(a, b, c);
    return 0;
}