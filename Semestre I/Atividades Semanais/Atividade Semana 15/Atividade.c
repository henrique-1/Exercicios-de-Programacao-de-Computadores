#include <stdio.h>
int main()
{
    //Declarando Variáveis
    int array[3];
    int *pointer;

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int j = 2; j >= 0; j--)
    {
        pointer = &array[j];

        printf("%d\n", *pointer);
    }
}