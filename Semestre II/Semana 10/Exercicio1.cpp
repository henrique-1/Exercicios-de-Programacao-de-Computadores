#include <iostream>
#include <math.h>

using namespace std;

class Superman
{
    public:
        int vida, voando;
        float pontuacao;
        float posicao;

    float irParaCima(int voando, float posicao)
    {
        voando = 1;
        posicao = posicao + 2;
    }

    float irParaBaixo(int voando, float posicao)
    {
        if(posicao > 0)
        {
            posicao = posicao - 2;
            voando = 1;
        }
        else if(posicao == 0)
        {
            posicao = 0;
            voando = 0;
        }
    }

    int verificaFim(int vida)
    {
        if(vida > 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

class Enemy
{
    public:
    float posicao;
    float speed;

    float andar(float speed, float posicao)
    {
        if(speed < 10)
        {
            speed++;
        }   
    }

    float parar(float speed, float posicao)
    {
        if(speed > 0)
        {
            speed--;
        }
    }
};