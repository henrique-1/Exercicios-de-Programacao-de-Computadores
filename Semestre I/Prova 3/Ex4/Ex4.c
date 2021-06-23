#include <stdio.h>
#include <string.h>

struct pessoa
{
    char nome[255];
    char sobrenome[255];
    char nascimento[40];
};
struct pessoa Pessoas[2];

int main()
{
    char data_nascimento[40];
    int verify = 0;

    for(int i = 0; i < 2; i++)
    {
        scanf("%s", Pessoas[i].nome);
        scanf("%s", Pessoas[i].sobrenome);
        scanf("%s", Pessoas[i].nascimento);
    }

    
    scanf("%s", data_nascimento);

    for(int i = 0; i < 2; i++)
    {
        if(strcmp(data_nascimento, Pessoas[i].nascimento) == 0)
        {
            printf("%s %s", Pessoas[i].nome, Pessoas[i].sobrenome);
            verify++;
        }
        
    }

    if(verify == 0)
    {
        printf("NAO EXISTE!");
    }
}