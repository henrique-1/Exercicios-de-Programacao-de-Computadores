#include <stdio.h>
int main()
{
    //O arquivo de texto será criado na current path do programa

    //Declarando Variáveis
    FILE *fp;
    char str[512];

    //Criando o Arquivo de Texto
    fp = fopen("novoArquivo.txt", "w");

    for(int i = 0; i < 100; i++)
    {
        fprintf(fp, "Aluno - linha %d\n", i);
    }

    fclose(fp);

    fp = fopen("novoArquivo.txt", "r");

    while(!feof(fp))
    {
        int tamanho=fgets(str, 50, fp);

        if (tamanho < 1) break;
        printf("%s\n", str);
    }
}