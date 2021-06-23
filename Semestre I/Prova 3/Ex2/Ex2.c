#include <stdio.h>
#include <math.h>

int main()
{
    int array[5], b[5];
    FILE *fp;
    int line = 0, num = 0;
    

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    fp = fopen("novoArquivo.txt", "w");

    for(int i = 0; i <5; i++)
    {
        b[i] = array[4-i];
        fprintf(fp, "%d: %d\n", i, b[i]);
    }

    fclose(fp);

    fp = fopen("novoArquivo.txt", "r");

    while(fscanf(fp, "%d: %d", &line, &num)!= EOF)
    {
        printf("%d: %d\n", line, num);
    }
    fclose(fp);
}