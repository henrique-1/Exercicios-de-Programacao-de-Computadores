#include <stdio.h>
#include <string.h>
int main()
{
    struct Funcionarios
    {
        char cargo[255];
        float salario;
    };
    struct Funcionarios func[3];

    for(int i = 0; i < 3; i++)
    {
        scanf("%f", &func[i].salario);
        scanf("%s", func[i].cargo);
    }

    float maior = 0;
    char nomeMaior[255];
    float menor = 10000;
    char nomeMenor[255];
    float soma = 0;
    float media = 0;

    //Calcula Média
        //1º Calcula-se a Soma
        for(int i = 0; i < 4; i++)
        {
            soma += func[i].salario;
        }
        media = (soma)/3;
        
    
    //Calcula Maior
    for ( int i = 0; i < 3; i++)
    {
        if (func[i].salario > maior)
        {
            maior = func[i].salario;
            
            for(int j = strlen(func[i].cargo); j >= 0; j--)
            {
                nomeMaior[j] = func[i].cargo[j];
            }
        }
        
    }

    //Calcula Menor
    for (int i = 0; i < 3; i++)
    {
        if (func[i].salario < menor)
        {
            menor = func[i].salario;

            for(int j = strlen(func[i].cargo); j >= 0; j--)
            {
                nomeMenor[j] = func[i].cargo[j];
            }
        }
    }

    printf("Maior: %s %.2f", nomeMaior, maior);
    printf("\nMenor: %s %.2f", nomeMenor, menor);
    printf("\nMedia: %.2f", media);
}