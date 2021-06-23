#include <stdio.h>

int main(void)
{
    //Declarando Variáveis
    int array[5];
    int total = 0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int j = 0; j < 5; j++)
    {
        if(array[j] > 5)
        {
            total += array[j];
        }
    }

    printf("%d", total);
}