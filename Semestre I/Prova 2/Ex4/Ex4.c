#include <stdio.h>
#include <math.h>

float correcao(int salario)
{
    //Declarando Variáveis
    float SalarioCorrigido;

    if(salario <= 2000)
    {
        //Não possui correção
        SalarioCorrigido = salario;
    }
    else if(salario >= 3001)
    {
        SalarioCorrigido = salario*0.80;
    }
    else if(salario >= 2001)
    {
        SalarioCorrigido = salario*0.90;
    }
    
    return SalarioCorrigido;
}