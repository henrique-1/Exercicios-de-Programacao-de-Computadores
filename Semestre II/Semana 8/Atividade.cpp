#include <iostream>

using namespace std;

class ITEM
{
    public: 
    string Nome;
    float QtdAnterior, QtdAtual, QtdContada;

    float VerificaQtd(float QtdAnterior, float QtdAtual, float QtdContada);

    float CadastraItem(string Nome, float QtdAnterior, float QtdAtual, float QtdContada);
};

float ITEM::VerificaQtd(float QtdAnterior, float QtdAtual, float QtdContada)
{

}

float ITEM::CadastraItem(string Nome, float QtdAnterior, float QtdAtual, float QtdContada)
{

}


int main()
{
    ITEM Item1;

    
}