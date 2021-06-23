#include <stdio.h>
int main(void)
{
    //Declarando Variáveis
    int Peso = 0;
    int Kg = 0;
    int Ton = 0;
    int Soma;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &Peso);
		if(Peso < 0)
		{
			Peso = 0;
		}	
        if(Peso >= 0)
        {
            if(Peso <= 1000)
            {
                Kg = Kg + Peso;
            }
            if(Peso >= 1001)
            {
                Ton = Ton + Peso;
            }
        }
    }
    printf("%d quilos\n", Kg);
    printf("%d toneladas", Ton);
}