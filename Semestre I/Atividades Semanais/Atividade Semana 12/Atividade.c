#include <stdio.h>
int main(void) {

    //Declarando Variáveis
    int array[4][4];
    int x=0; int y=0; int z;

    //Código
    for(x=0; x<4;x++)
    {
        for(y=0;y<4;y++)
        {
            array[x][y]=0;
        }   
    }

    for(z=0; z<4;z++)
    {
        x=0; y=0;
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d", &array [x] [y]);
        
    }
    
    for(x=0; x<4;x++)
    {
        for(y=0;y<4;y++)
        {
            printf("%d ",array [x] [y]);
        }

        printf("\n");
    }
    return 0;
}