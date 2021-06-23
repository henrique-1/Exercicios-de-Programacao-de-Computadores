#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int ConvertEdersonToBorges()
{
    setlocale(LC_ALL,"Portuguese");

    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    float TempEderson, TempBorges;

    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\nConversor de ");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Ederson ");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("para ");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Borges");
    SetConsoleTextAttribute(h, wOldColorAttrs);

    printf("\nDigite a temperatura em Ederson");
    printf("\n> ");
    scanf("%f", &TempEderson);

    TempBorges = (TempEderson-273)/5;

    printf("\n\n%.2f E sao %.2f B", TempEderson, TempBorges);

}

int ConvertForteToEderson()
{
    setlocale(LC_ALL,"Portuguese");

    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    float TempForte, TempEderson;

    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\nConversor de ");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Forte ");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("para ");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Ederson");
    SetConsoleTextAttribute(h, wOldColorAttrs);

    printf("\nDigite a temperatura em Forte");
    printf("\n> ");
    scanf("%f", &TempForte);

    TempEderson = (TempForte-273)/5;

    printf("\n\n%.2f F sao %.2f E", TempForte, TempEderson);
}

int GetConversionVar()
{
    setlocale(LC_ALL,"Portuguese");

    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    int ConvertOption;

    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("Você deseja converter: \n");
    SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("1 - Ederson em Borges\n");
    SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("2 - Forte em Ederson\n");
    SetConsoleTextAttribute(h, wOldColorAttrs);
    printf("> ");
    scanf("%d", &ConvertOption);

    if(ConvertOption == 1)
    {
        ConvertEdersonToBorges();
    }
    else
    {
        ConvertForteToEderson();
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    //Set new color
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Exercicio 1\n");

    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\r\nConversor de: ");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\nEderson em Borges");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\ne");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\nForte em Ederson\n\n");
    //Restore Original Color
    SetConsoleTextAttribute(h, wOldColorAttrs);

    GetConversionVar();
}