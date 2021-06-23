//Bibliotecas Utilizadas 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <time.h>
#include <locale.h>
#include <ctype.h>
#include <dirent.h>
#include <errno.h>
#include <stdbool.h>

//Struct dos Compromissos
struct Compromisso
{
    int id;
    char estado[50];
    char assunto[255];
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
};
typedef struct Compromisso AGENDA;
AGENDA ag;

FILE *fp, *fp2;
char line[1024]={0,};

void Apresentacao()
{
    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    setlocale(LC_ALL,"Portuguese");

    //Set new color
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Trabalho Final de Programacao de Computadores 1\n");
    //Restore Original Color
    SetConsoleTextAttribute(h, wOldColorAttrs);

    sleep(1);
}

void Create_File()
{
    setlocale(LC_ALL,"Portuguese");

    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    //Program Path
    char* dirname = "Trabalho-PRCE1";
    mkdir(dirname);

    //Janeiro
    dirname = "Trabalho-PRCE1\\Janeiro";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Janeiro\\Janeiro.txt", "w");
    fclose(fp);

    //Fevereiro
    dirname = "Trabalho-PRCE1\\Fevereiro";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Fevereiro\\Fevereiro.txt", "w");
    
    fclose(fp);

    //Março
    dirname = "Trabalho-PRCE1\\Marco";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Marco\\Marco.txt", "w");
    
    fclose(fp);

    //Abril 
    dirname = "Trabalho-PRCE1\\Abril";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Abril\\Abril.txt", "w");
    
    fclose(fp);

    //Maio
    dirname = "Trabalho-PRCE1\\Maio";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Maio\\Maio.txt", "w");
    
    fclose(fp);

    //Junho
    dirname = "Trabalho-PRCE1\\Junho";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Junho\\Junho.txt", "w");
    
    fclose(fp);

    //Julho
    dirname = "Trabalho-PRCE1\\Julho";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Julho\\Julho.txt", "w");
    
    fclose(fp);

    //Agosto
    dirname = "Trabalho-PRCE1\\Agosto";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Agosto\\Agosto.txt", "w");
    
    fclose(fp);

    //Setembro
    dirname = "Trabalho-PRCE1\\Setembro";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Setembro\\Setembro.txt", "w");
    
    fclose(fp);

    //Outubro
    dirname = "Trabalho-PRCE1\\Outubro";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Outubro\\Outubro.txt", "w");
    
    fclose(fp);

    //Novembro
    dirname = "Trabalho-PRCE1\\Novembro";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Novembro\\Novembro.txt", "w");
    
    fclose(fp);
    
    //Dezembro
    dirname = "Trabalho-PRCE1\\Dezembro";
    mkdir(dirname);
    fp = fopen("Trabalho-PRCE1\\Dezembro\\Dezembro.txt", "w");
    
    fclose(fp);

    printf("\r\nO programa ira criar uma pasta na raiz do programa");

    SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("\n[...]");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n     |_ Trabalho-PRCE1");
    printf("\n                      |- Janeiro");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                               |_ Janeiro.txt");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n                      |- Fevereiro");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                                 |_ Fevereiro.txt");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n                      |- Marco");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                             |_ Marco.txt");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n                      |- Abril");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                             |_ Abril.txt");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n                      |- Maio");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                            |_ Maio.txt");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n                      |- Junho");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                             |_ Junho.txt");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n                      |- Julho");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                             |_ Julho.txt");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n                      |- Agosto");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                              |_ Agosto.txt");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n                      |- Setembro");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                                |_ Setembro.txt");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n                      |- Outubro");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                               |_ Outubro.txt");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n                      |- Novembro");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                                |_ Novembro.txt");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n                      |- Dezembro");
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n                                |_ Dezembro.txt");
    SetConsoleTextAttribute(h, wOldColorAttrs);

    sleep(1);
}

char Menu()
{
    setlocale(LC_ALL,"Portuguese");

    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;


    //system("cls");

    //Set new color
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n###############  AGENDA DE COMPROMISSOS: ###############\n");
    //Restore Original Color
    SetConsoleTextAttribute(h, wOldColorAttrs);

    printf("\n");
    SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("[1] - Ler compromissos\n");
    printf("[2] - Cadastrar compromisso\n");
    printf("[3] - Editar compromisso\n");
    printf("[4] - Apagar compromisso\n");
    printf("[9] - Sair\n");
    printf("\n");
    printf("> ");
    return (toupper(getche()));
}

void Inserir(int mes)
{
    setlocale(LC_ALL,"Portuguese");
    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    system("cls");
    int linha = 0;

    //Set new color
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n###############  CADASTRAR COMPROMISSO: ###############\n");
    //Restore Original Color
    SetConsoleTextAttribute(h, wOldColorAttrs);

    switch(mes)
    {
        //Janeiro
        case 1:
            fp = fopen("Trabalho-PRCE1\\Janeiro\\Janeiro.txt", "r+");

            ag.mes = 1;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;

        //Fevereiro
        case 2:
            fp = fopen("Trabalho-PRCE1\\Fevereiro\\Fevereiro.txt", "r+");
            
            ag.mes = 2;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;

        //Março
        case 3:
            fp = fopen("Trabalho-PRCE1\\Março\\Marco.txt", "r+");
            
            ag.mes = 3;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;

        //Abril
        case 4:
            fp = fopen("Trabalho-PRCE1\\Abril\\Abril.txt", "r+");
            
            ag.mes = 4;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;

        //Maio
        case 5:
            fp = fopen("Trabalho-PRCE1\\Maio\\Maio.txt", "r+");
            
            ag.mes = 5;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;

        //Junho
        case 6:
            fp = fopen("Trabalho-PRCE1\\Junho\\Junho.txt", "r+");
            
            ag.mes = 6;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;

        //Julho
        case 7:
            fp = fopen("Trabalho-PRCE1\\Julho\\Julho.txt", "r+");
            
            ag.mes = 7;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;

        //Agosto
        case 8:
            fp = fopen("Trabalho-PRCE1\\Agosto\\Agosto.txt", "r+");
            
            ag.mes = 8;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;

        //Setembro
        case 9:
            fp = fopen("Trabalho-PRCE1\\Setembro\\Setembro.txt", "r+");
            
            ag.mes = 9;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;

        //Outubro
        case 10:
            fp = fopen("Trabalho-PRCE1\\Outubro\\Outubro.txt", "r+");
            
            ag.mes = 10;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;

        //Novembro
        case 11:
            fp = fopen("Trabalho-PRCE1\\Novembro\\Novembro.txt", "r+");
            
            ag.mes = 11;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;

        //Dezembro
        case 12:
            fp = fopen("Trabalho-PRCE1\\Dezembro\\Dezembro.txt", "r+");
            
            ag.mes = 12;

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            fprintf(fp, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);

            linha = 0;
            fclose(fp);
        break;
    }
}

void Lista_Mes(int dia, int mes, int ano)
{
    setlocale(LC_ALL,"Portuguese");
    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    int day = 0;
    system("cls");
    switch(mes)
    {
        //Janeiro
        case 1:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\nJaneiro\n");
            for(int i = 0; i < 5; i++)
            {
                SetConsoleTextAttribute(h, wOldColorAttrs);
                for(int j = 0; j <= 6; j++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    if(day < 31)
                    {
                        day++;
                        if(day == dia)
                        {
                            SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            printf("%d  ", day);
                        }
                        else
                        {
                            printf("%d  ", day);
                        }
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }
            Lista_Compromisso(mes);
        break;

        //Fevereiro
        case 2:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\nFevereiro\n");
            //Ano Bissexto
            if(ano % 400 == 0)
            {
                for(int i = 0; i < 5; i++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    for(int j = 0; j <= 6; j++)
                    {
                        SetConsoleTextAttribute(h, wOldColorAttrs);
                        if(day < 29)
                        {
                            day++;
                            if(day == dia)
                            {
                                SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                printf("%d  ", day);
                            }
                            else
                            {
                                printf("%d  ", day);
                            }
                        }
                        else
                        {
                            printf("  ");
                        }
                        
                        
                    }
                    printf("\n");
                }
            }
            //Ano Comum
            if(ano % 100 == 0)
            {
                for(int i = 0; i < 5; i++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    for(int j = 0; j <= 6; j++)
                    {
                        SetConsoleTextAttribute(h, wOldColorAttrs);
                        if(day < 28)
                        {
                            day++;
                            if(day == dia)
                            {
                                SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                printf("%d  ", day);
                            }
                            else
                            {
                                printf("%d  ", day);
                            }
                        }
                        else
                        {
                            printf("  ");
                        }
                        
                        
                    }
                    printf("\n");
                }
            }
            //Ano Bissexto
            if(ano % 4 == 0)
            {
                for(int i = 0; i < 5; i++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    for(int j = 0; j <= 6; j++)
                    {
                        SetConsoleTextAttribute(h, wOldColorAttrs);
                        if(day < 29)
                        {
                            day++;
                            if(day == dia)
                            {
                                SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                printf("%d  ", day);
                            }
                            else
                            {
                                printf("%d  ", day);
                            }
                        }
                        else
                        {
                            printf("  ");
                        }
                        
                        
                    }
                    printf("\n");
                }
            }
            Lista_Compromisso(mes);
        break;

        //Março
        case 3:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\nMarco\n");
            for(int i = 0; i < 5; i++)
            {
                SetConsoleTextAttribute(h, wOldColorAttrs);
                for(int j = 0; j <= 6; j++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    if(day < 31)
                    {
                        day++;
                        if(day == dia)
                        {
                            SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            printf("%d  ", day);
                        }
                        else
                        {
                            printf("%d  ", day);
                        }
                    }
                    else
                    {
                        printf("  ");
                    }
                    
                    
                }
                printf("\n");
            }
            Lista_Compromisso(mes);
        break;

        //Abril
        case 4:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\nAbril\n");
            for(int i = 0; i < 5; i++)
            {
                SetConsoleTextAttribute(h, wOldColorAttrs);
                for(int j = 0; j <= 6; j++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    if(day < 30)
                    {
                        day++;
                        if(day == dia)
                        {
                            SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            printf("%d  ", day);
                        }
                        else
                        {
                            printf("%d  ", day);
                        }
                    }
                    else
                    {
                        printf("  ");
                    }
                    
                    
                }
                printf("\n");
            }
            Lista_Compromisso(mes);
        break;

        //Maio
        case 5:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\nMaio\n");
            for(int i = 0; i < 5; i++)
            {
                SetConsoleTextAttribute(h, wOldColorAttrs);
                for(int j = 0; j <= 6; j++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    if(day < 31)
                    {
                        day++;
                        if(day == dia)
                        {
                            SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            printf("%d  ", day);
                        }
                        else
                        {
                            printf("%d  ", day);
                        }
                    }
                    else
                    {
                        printf("  ");
                    }
                    
                    
                }
                printf("\n");
            }
            Lista_Compromisso(mes);
        break;

        //Junho
        case 6:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\nJunho\n");
            for(int i = 0; i < 5; i++)
            {
                SetConsoleTextAttribute(h, wOldColorAttrs);
                for(int j = 0; j <= 6; j++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    if(day < 30)
                    {
                        day++;
                        if(day == dia)
                        {
                            SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            printf("%d  ", day);
                        }
                        else
                        {
                            printf("%d  ", day);
                        }
                    }
                    else
                    {
                        printf("  ");
                    }
                    
                    
                }
                printf("\n");
            }
            Lista_Compromisso(mes);
        break;

        //Julho
        case 7:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\nJulho\n");
            for(int i = 0; i < 5; i++)
            {
                SetConsoleTextAttribute(h, wOldColorAttrs);
                for(int j = 0; j <= 6; j++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    if(day < 31)
                    {
                        day++;
                        if(day == dia)
                        {
                            SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            printf("%d  ", day);
                        }
                        else
                        {
                            printf("%d  ", day);
                        }
                    }
                    else
                    {
                        printf("  ");
                    }
                    
                    
                }
                printf("\n");
            }
            Lista_Compromisso(mes);
        break;

        //Agosto
        case 8:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\nAgosto\n");
            for(int i = 0; i < 5; i++)
            {
                SetConsoleTextAttribute(h, wOldColorAttrs);
                for(int j = 0; j <= 6; j++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    if(day < 31)
                    {
                        day++;
                        if(day == dia)
                        {
                            SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            printf("%d  ", day);
                        }
                        else
                        {
                            printf("%d  ", day);
                        }
                    }
                    else
                    {
                        printf("  ");
                    }
                    
                    
                }
                printf("\n");
            }
            Lista_Compromisso(mes);
        break;

        //Setembro
        case 9:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\nSetembro\n");
            for(int i = 0; i < 5; i++)
            {
                SetConsoleTextAttribute(h, wOldColorAttrs);
                for(int j = 0; j <= 6; j++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    if(day < 30)
                    {
                        day++;
                        if(day == dia)
                        {
                            SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            printf("%d  ", day);
                        }
                        else
                        {
                            printf("%d  ", day);
                        }
                    }
                    else
                    {
                        printf("  ");
                    }
                    
                    
                }
                printf("\n");
            }
            Lista_Compromisso(mes);
        break;

        //Outubro
        case 10:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\nOutubro\n");
            for(int i = 0; i < 5; i++)
            {
                SetConsoleTextAttribute(h, wOldColorAttrs);
                for(int j = 0; j <= 6; j++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    if(day < 31)
                    {
                        day++;
                        if(day == dia)
                        {
                            SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            printf("%d  ", day);
                        }
                        else
                        {
                            printf("%d  ", day);
                        }
                    }
                    else
                    {
                        printf("  ");
                    }

                }
                printf("\n");
            }
            SetConsoleTextAttribute(h, wOldColorAttrs);
            Lista_Compromisso(mes);
        break;

        //Novembro
        case 11:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\nNovembro\n");
            for(int i = 0; i < 5; i++)
            {
                SetConsoleTextAttribute(h, wOldColorAttrs);
                for(int j = 0; j <= 6; j++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    if(day < 30)
                    {
                        day++;
                        if(day == dia)
                        {
                            SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            printf("%d  ", day);
                        }
                        else
                        {
                            printf("%d  ", day);
                        }
                    }
                    else
                    {
                        printf("  ");
                    }
                    
                    
                }
                printf("\n");
            }
            Lista_Compromisso(mes);
        break;

        //Dezembro
        case 12:
            SetConsoleTextAttribute (h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("\nDezembro\n");
            for(int i = 0; i < 5; i++)
            {
                SetConsoleTextAttribute(h, wOldColorAttrs);
                for(int j = 0; j <= 6; j++)
                {
                    SetConsoleTextAttribute(h, wOldColorAttrs);
                    if(day < 31)
                    {
                        day++;
                        if(day == dia)
                        {
                            SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            printf("%d  ", day);
                        }
                        else
                        {
                            printf("%d  ", day);
                        }
                    }
                    else
                    {
                        printf("  ");
                    }
                    
                    
                }
                printf("\n");
            }
            Lista_Compromisso(mes);
        break;
    }
}

void Lista_Compromisso(int mes)
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
    printf("\n###############  COMPROMISSOS DO MES: ###############\n");
    //Restore Original Color
    SetConsoleTextAttribute(h, wOldColorAttrs);

    char str[512];

    switch(mes)
    {
        //Janeiro
        case 1:
            fp = fopen("Trabalho-PRCE1\\Janeiro\\Janeiro.txt", "r");
            
            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;

        //Fevereiro
        case 2:
            fp = fopen("Trabalho-PRCE1\\Fevereiro\\Fevereiro.txt", "r");

            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;

        //Março
        case 3:
            fp = fopen("Trabalho-PRCE1\\Março\\Marco.txt", "r");

            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;

        //Abril
        case 4:
            fp = fopen("Trabalho-PRCE1\\Abril\\Abril.txt", "r");

            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;

        //Maio
        case 5:
            fp = fopen("Trabalho-PRCE1\\Maio\\Maio.txt", "r");

            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;

        //Junho
        case 6:
            fp = fopen("Trabalho-PRCE1\\Junho\\Junho.txt", "r");

            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;

        //Julho
        case 7:
            fp = fopen("Trabalho-PRCE1\\Julho\\Julho.txt", "r");

            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;

        //Agosto
        case 8:
            fp = fopen("Trabalho-PRCE1\\Agosto\\Agosto.txt", "r");

            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;

        //Setembro
        case 9:
            fp = fopen("Trabalho-PRCE1\\Setembro\\Setembro.txt", "r");

            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;

        //Outubro
        case 10:
            fp = fopen("Trabalho-PRCE1\\Outubro\\Outubro.txt", "r");

            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;

        //Novembro
        case 11:
            fp = fopen("Trabalho-PRCE1\\Novembro\\Novembro.txt", "r");

            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;

        //Dezembro
        case 12:
            fp = fopen("Trabalho-PRCE1\\Dezembro\\Dezembro.txt", "r");

            while(!feof(fp))
            {
                fscanf(fp, "[%d]", &ag.id);
                fscanf(fp, "%s", &ag.assunto);
                fscanf(fp, "%d", &ag.dia);
                fscanf(fp, "%d", &ag.mes);
                fscanf(fp, "%d", &ag.ano);
                fscanf(fp, "%d", &ag.hora);
                fscanf(fp, "%d", &ag.minuto);
                fscanf(fp, "%s", &ag.estado);

                int tamanho=fgets(str, 50, fp);

                if (tamanho < 1) break;

                printf("[%d]    %s    %d/%d/%d %d:%d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
            }
            fclose(fp);
        break;
    }
}

void Editar(int mes)
{
    setlocale(LC_ALL,"Portuguese");
    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    int lno, linectr = 0;
    char str[256];
    char newln[256];
    int linha = 0;

    //Set new color
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n###############  EDITAR COMPROMISSO: ###############\n");
    SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n###############  WORK IN PROGRESS - MAY NOT WORK ###############\n");
    //Restore Original Color
    SetConsoleTextAttribute(h, wOldColorAttrs);

    switch(mes)
    {
        //Janeiro
        case 1:

            fp = fopen("Trabalho-PRCE1\\Janeiro\\Janeiro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Janeiro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 1;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Janeiro\\Janeiro.txt");
            rename("Trabalho-PRCE1\\Janeiro\\Temp.txt", "Trabalho-PRCE1\\Janeiro\\Janeiro.txt");
            linha = 0;
        break;

        //Fevereiro
        case 2:

            fp = fopen("Trabalho-PRCE1\\Fevereiro\\Fevereiro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Fevereiro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 1;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Fevereiro\\Fevereiro.txt");
            rename("Trabalho-PRCE1\\Fevereiro\\Temp.txt", "Trabalho-PRCE1\\Fevereiro\\Fevereiro.txt");
            linha = 0;
            
        break;

        //Março
        case 3:

            fp = fopen("Trabalho-PRCE1\\Marco\\Marco.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Marco\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 1;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Marco\\Marco.txt");
            rename("Trabalho-PRCE1\\Marco\\Temp.txt", "Trabalho-PRCE1\\Marco\\Marco.txt");
            linha = 0;

        break;

        //Abril
        case 4:

            fp = fopen("Trabalho-PRCE1\\Abril\\Abril.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Abril\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 1;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Abril\\Abril.txt");
            rename("Trabalho-PRCE1\\Abril\\Temp.txt", "Trabalho-PRCE1\\Abril\\Abril.txt");
            linha = 0;

        break;

        //Maio
        case 5:

            fp = fopen("Trabalho-PRCE1\\Maio\\Maio.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Maio\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 1;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Maio\\Maio.txt");
            rename("Trabalho-PRCE1\\Maio\\Temp.txt", "Trabalho-PRCE1\\Maio\\Maio.txt");
            linha = 0;

        break;

        //Junho
        case 6:

            fp = fopen("Trabalho-PRCE1\\Junho\\Junho.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Junho\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 1;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Junho\\Junho.txt");
            rename("Trabalho-PRCE1\\Junho\\Temp.txt", "Trabalho-PRCE1\\Junho\\Junho.txt");
            linha = 0;

        break;

        //Julho
        case 7:

            fp = fopen("Trabalho-PRCE1\\Julho\\Julho.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Julho\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 1;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Julho\\Julho.txt");
            rename("Trabalho-PRCE1\\Julho\\Temp.txt", "Trabalho-PRCE1\\Julho\\Julho.txt");
            linha = 0;

        break;

        //Agosto
        case 8:

            fp = fopen("Trabalho-PRCE1\\Agosto\\Agosto.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Agosto\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 1;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Agosto\\Agosto.txt");
            rename("Trabalho-PRCE1\\Agosto\\Temp.txt", "Trabalho-PRCE1\\Agosto\\Agosto.txt");
            linha = 0;

        break;

        //Setembro
        case 9:

            fp = fopen("Trabalho-PRCE1\\Setembro\\Setembro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Setembro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 1;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Setembro\\Setembro.txt");
            rename("Trabalho-PRCE1\\Setembro\\Temp.txt", "Trabalho-PRCE1\\Setembro\\Setembro.txt");
            linha = 0;

        break;

        //Outubro
        case 10:

            fp = fopen("Trabalho-PRCE1\\Outubro\\Outubro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Outubro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 10;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Outubro\\Outubro.txt");
            rename("Trabalho-PRCE1\\Outubro\\Temp.txt", "Trabalho-PRCE1\\Outubro\\Outubro.txt");
            linha = 0;
            
        break;

        //Novembro
        case 11:

            fp = fopen("Trabalho-PRCE1\\Novembro\\Novembro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Novembro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 10;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Novembro\\Novembro.txt");
            rename("Trabalho-PRCE1\\Novembro\\Temp.txt", "Trabalho-PRCE1\\Novembro\\Novembro.txt");
            linha = 0;

        break;

        //Dezembro
        case 12:
            
            fp = fopen("Trabalho-PRCE1\\Dezembro\\Dezembro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Dezembro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            while( fgets(line, 1024, fp) !=NULL ) 
            {
                linha++;
            } 
            
            ag.id = linha;

            printf("\n\nDigite o assunto do compromisso");
            printf("\n> ");
            scanf("%s", &ag.assunto);

            printf("\nDigite o dia do compromisso");
            printf("\n> ");
            scanf("%d", &ag.dia);

            ag.mes = 10;

            printf("\nDigite o ano do compromisso");
            printf("\n> ");
            scanf("%d", &ag.ano);

            printf("\nDigite a hora do compromisso");
            printf("\n> ");
            scanf("%d", &ag.hora);

            printf("\nDigite o minuto do compromisso");
            printf("\n> ");
            scanf("%d", &ag.minuto);

            printf("\nDigite o estado do compromisso");
            printf("\n> ");
            scanf("%s", &ag.estado);

            printf("\nDigite o numero da linha que deseja substituir");
            printf("\n> ");
            scanf("%d", &lno);
            lno++;
            
            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 256, fp);

                if(!feof(fp))
                {
                    linectr++;
                    if(linectr != lno)
                    {
                        fprintf(fp, "%s", str);
                    }
                    else
                    {
                        fprintf(fp2, "[%d]    %s    %d %d %d    %d %d    %s\n", ag.id, ag.assunto, ag.dia, ag.mes, ag.ano, ag.hora, ag.minuto, ag.estado);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Dezembro\\Dezembro.txt");
            rename("Trabalho-PRCE1\\Dezembro\\Temp.txt", "Trabalho-PRCE1\\Dezembro\\Dezembro.txt");
            linha = 0;

        break;
    }
}

void Apagar(int mes)
{
    setlocale(LC_ALL,"Portuguese");
    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    int lnlnum = 0;
    int ctr = 0;
    char str[1024];

    //Set new color
    SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\n###############  APAGAR COMPROMISSO: ###############\n");
    //Restore Original Color
    SetConsoleTextAttribute(h, wOldColorAttrs);

    switch(mes)
    {
        //Janeiro
        case 1:
            fp = fopen("Trabalho-PRCE1\\Janeiro\\Janeiro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Janeiro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Janeiro\\Janeiro.txt");
            rename("Trabalho-PRCE1\\Janeiro\\Temp.txt", "Trabalho-PRCE1\\Janeiro\\Janeiro.txt");
        break;

        //Fevereiro
        case 2:
            fp = fopen("Trabalho-PRCE1\\Fevereiro\\Fevereiro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Fevereiro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Fevereiro\\Fevereiro.txt");
            rename("Trabalho-PRCE1\\Fevereiro\\Temp.txt", "Trabalho-PRCE1\\Fevereiro\\Fevereiro.txt");
        break;

        //Março
        case 3:
            fp = fopen("Trabalho-PRCE1\\Marco\\Marco.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Marco\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Marco\\Marco.txt");
            rename("Trabalho-PRCE1\\Marco\\Temp.txt", "Trabalho-PRCE1\\Marco\\Marco.txt");
        break;

        //Abril
        case 4:
            fp = fopen("Trabalho-PRCE1\\Abril\\Abril.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Abril\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Abril\\Abril.txt");
            rename("Trabalho-PRCE1\\Abril\\Temp.txt", "Trabalho-PRCE1\\Abril\\Abril.txt");
        break;

        //Maio
        case 5:
            fp = fopen("Trabalho-PRCE1\\Maio\\Maio.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Maio\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Maio\\Maio.txt");
            rename("Trabalho-PRCE1\\Maio\\Temp.txt", "Trabalho-PRCE1\\Maio\\Maio.txt");
        break;

        //Junho
        case 6:
            fp = fopen("Trabalho-PRCE1\\Junho\\Junho.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Junho\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Junho\\Junho.txt");
            rename("Trabalho-PRCE1\\Junho\\Temp.txt", "Trabalho-PRCE1\\Junho\\Junho.txt");
        break;

        //Julho
        case 7:
            fp = fopen("Trabalho-PRCE1\\Julho\\Julho.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Julho\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Julho\\Julho.txt");
            rename("Trabalho-PRCE1\\Julho\\Temp.txt", "Trabalho-PRCE1\\Julho\\Julho.txt");
        break;

        //Agosto
        case 8:
            fp = fopen("Trabalho-PRCE1\\Agosto\\Agosto.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Agosto\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Agosto\\Agosto.txt");
            rename("Trabalho-PRCE1\\Agosto\\Temp.txt", "Trabalho-PRCE1\\Agosto\\Agosto.txt");
        break;

        //Setembro
        case 9:
            fp = fopen("Trabalho-PRCE1\\Setembro\\Setembro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Setembro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Setembro\\Setembro.txt");
            rename("Trabalho-PRCE1\\Setembro\\Temp.txt", "Trabalho-PRCE1\\Setembro\\Setembro.txt");
        break;

        //Outubro
        case 10:
            fp = fopen("Trabalho-PRCE1\\Outubro\\Outubro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Outubro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Outubro\\Outubro.txt");
            rename("Trabalho-PRCE1\\Outubro\\Temp.txt", "Trabalho-PRCE1\\Outubro\\Outubro.txt");
        break;

        //Novembro
        case 11:
            fp = fopen("Trabalho-PRCE1\\Novembro\\Novembro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Novembro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Novembro\\Novembro.txt");
            rename("Trabalho-PRCE1\\Novembro\\Temp.txt", "Trabalho-PRCE1\\Novembro\\Novembro.txt");
        break;

        //Dezembro
        case 12:
            fp = fopen("Trabalho-PRCE1\\Dezembro\\Dezembro.txt", "r");
            if(!fp)
            {
                printf("Arquivo nao encontrado ou nao foi possível abri-lo!!\n");
            }

            fp2 = fopen("Trabalho-PRCE1\\Dezembro\\Temp.txt", "w");
            if(!fp2)
            {
                printf("Nao foi possivel abrir o arquivo temporario!!\n");
                fclose(fp);
            }

            printf("\nDigite o numero da linha do compromisso que deseja remover");
            printf("\n> ");
            scanf("%d", &lnlnum);

            while(!feof(fp))
            {
                strcpy(str, "\0");
                fgets(str, 1024, fp);
                if(!feof(fp))
                {
                    ctr++;
                    if(ctr != lnlnum)
                    {
                        fprintf(fp2, "%s", str);
                    }
                }
            }

            fclose(fp);
            fclose(fp2);

            remove("Trabalho-PRCE1\\Dezembro\\Dezembro.txt");
            rename("Trabalho-PRCE1\\Dezembro\\Temp.txt", "Trabalho-PRCE1\\Dezembro\\Dezembro.txt");
        break;
    }
}

int main()
{
    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    WORD wOldColorAttrs;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    //Save the current color information
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    wOldColorAttrs = csbiInfo.wAttributes;

    SetConsoleTextAttribute(h, wOldColorAttrs);

    setlocale(LC_ALL,"Portuguese");
    
    DIR* dir = opendir("Trabalho-PRCE1");
    if (dir)
    {
        closedir(dir);
        Apresentacao();
    } 
    else if (ENOENT == errno)
    {
        //Executa os complementos iniciais do Programa
        Apresentacao();
        Create_File();
    } 
    else
    {
        /* opendir() falhou por outra rasão. */
    }

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int dia = tm.tm_mday;
    int mes = tm.tm_mon + 1;
    int ano = tm.tm_year + 1900;
    
    char op;
    char subMenu1 = 0, subMenu2 = 0, subMenu3 = 0, subMenu4 = 0;

    do
    {
        op = Menu();
        SetConsoleTextAttribute(h, wOldColorAttrs);

        switch(op)
        {
            case '1': 
            
                //system("cls");
                
                SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                printf("\n###############  LER COMPROMISSOS: ###############\n");
                SetConsoleTextAttribute(h, wOldColorAttrs);

                printf("\n[1] - Mes atual\n");
                printf("[2] - Outro mes\n");
                printf("\n");
                printf("> ");
                subMenu1 = toupper(getche());

                if(subMenu1 == '1')
                {
                    Lista_Mes(dia, mes, ano); 
                }
                else if (subMenu1 == '2')
                {
                    printf("\nDigite o mes: ");
                    scanf("%d", &mes);
                    Lista_Mes(dia, mes, ano); 
                }
            
            break;
            case '2': 

                //system("cls");

                SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                printf("\n###############  CADASTRAR COMPROMISSOS: ###############\n");
                SetConsoleTextAttribute(h, wOldColorAttrs);

                printf("\n[1] - Mes atual\n");
                printf("[2] - Outro mes\n");
                printf("\n");
                printf("> ");
                subMenu2 = toupper(getche());

                if(subMenu2 == '1')
                {
                    Inserir(mes); 
                }
                else if (subMenu2 == '2')
                {
                    printf("\nDigite o mes: ");
                    scanf("%d", &mes);
                    Inserir(mes); 
                }

            break;
            case '3': 

                //system("cls");
                
                SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                printf("\n###############  EDITAR COMPROMISSOS: ###############\n");
                SetConsoleTextAttribute(h, wOldColorAttrs);

                printf("\n[1] - Mes atual\n");
                printf("[2] - Outro mes\n");
                printf("\n");
                printf("> ");
                subMenu3 = toupper(getche());

                if(subMenu3 == '1')
                {
                    Lista_Mes(dia, mes, ano); 
                    Editar(mes); 
                }
                else if (subMenu3 == '2')
                {
                    Lista_Mes(dia, mes, ano); 
                    printf("\nDigite o mes: ");
                    scanf("%d", &mes);
                    Editar(mes); 
                }
            
            break;
            case '4': 

                //system("cls");
                
                SetConsoleTextAttribute (h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                printf("\n###############  APAGAR COMPROMISSOS: ###############\n");
                SetConsoleTextAttribute(h, wOldColorAttrs);

                printf("\n[1] - Mes atual\n");
                printf("[2] - Outro mes\n");
                printf("\n");
                printf("> ");
                subMenu4 = toupper(getche());

                if(subMenu4 == '1')
                {
                    Lista_Mes(dia, mes, ano); 
                    Apagar(mes); 
                }
                else if (subMenu4 == '2')
                {
                    printf("\nDigite o mes: ");
                    scanf("%d", &mes);
                    Lista_Mes(dia, mes, ano); 
                    Apagar(mes); 
                }
                
            break;
        }

        printf("\n");
        system("PAUSE");

    }while (op != '9');

    if(op == '9')
    {
        SetConsoleTextAttribute(h, wOldColorAttrs);
        system("cls");
    }

    return 0;
}