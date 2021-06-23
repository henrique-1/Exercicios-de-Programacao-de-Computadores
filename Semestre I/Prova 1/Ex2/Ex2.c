#include <stdio.h>
int main(void)
{
    //Declarando váriáveis
    int N;
    int Somatoria = 0;

    for(int i = 0; i >= 0; i++)
    {
        scanf("%d", &N);
        Somatoria = Somatoria + N;
        if(N == 0)
        {
            printf("%d", Somatoria);
            break;
        }
    }
}