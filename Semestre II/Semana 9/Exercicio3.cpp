#include <iostream>
#include <windows.h>

using namespace std;

class Despertador
{
    public:
    int HoraAtual, MinutoAtual, SegundoAtual, HoraAcordar, MinutoAcordar;

    int ajustarRelogio()
    {
        cout << "Digite a hora atual: ";
        cout << "\n> ";
        cin >> HoraAtual;

        cout << "Digite o minuto atual: ";
        cout << "\n> ";
        cin >> MinutoAtual;
    }

    int ajustarAlarme()
    {
        cout << "Digite a hora do Alarme: ";
        cout << "\n> ";
        cin >> HoraAcordar;

        cout << "Digite o minuto do Alarme: ";
        cout << "\n> ";
        cin >> MinutoAcordar;
    }

    int dispararAlarme()
    {
        if(HoraAtual == HoraAcordar)
        {
            if(MinutoAtual == MinutoAcordar)
            {
                cout << "\nHora de acordar";
                cout << "\nDespertador programado para as "<< HoraAcordar << ":" << MinutoAcordar;

                return 0;
            } 
        }
    }
};

int main()
{
    Despertador Despertador1;

    Despertador1.ajustarRelogio();
    Despertador1. ajustarAlarme();

    Despertador1.SegundoAtual = 0;

    while(true)
    {
        //Fazer o relógio funcionar
        Sleep(1000);
        Despertador1.SegundoAtual++;

        //Ajustar o Relógio
        if(Despertador1.SegundoAtual >= 60)
        {
            Despertador1.SegundoAtual = 0;
            Despertador1.MinutoAtual = Despertador1.MinutoAtual +1;
        }
        if(Despertador1.MinutoAtual >= 60)
        {
            Despertador1.MinutoAtual = 0;
            Despertador1.HoraAtual = Despertador1.HoraAtual + 1;
        }

        Despertador1.dispararAlarme();
    }
}