#include <stdio.h>
#include <math.h>

int main()
{
    int array[12];
    int soma = 0;
    int *ponteiroLeitor;

    for(int i = 0; i < 13; i++)
    {
        scanf("%d", &array[i]);

        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 9 || i == 11)
        {
            ponteiroLeitor = &array[i];
            soma = soma + *ponteiroLeitor;
        }
    }

    printf("SOMA: %d", soma);
}