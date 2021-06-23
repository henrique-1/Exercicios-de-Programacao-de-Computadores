#include <iostream>
using namespace std;

class Triangulo{

    public:
        double sizeLado1,sizeLado2,sizeLado3;

        Triangulo(double l1,double l2,double l3)
        {
            this->sizeLado1=l1;
            this->sizeLado2=l2;
            this->sizeLado3=l3;
        }

    void Verifica_Tipo(){
        if (Verifica_Existencia())
        {
            if(sizeLado1==sizeLado2)
            {
                if(sizeLado1==sizeLado3)
                {
                    cout<<"eh EQUILATERO"<<endl;
                }
                else 
                {
                    cout<<"eh ISOSCELES"<<endl;
                }
            }
            else
            {
                if(sizeLado1==sizeLado3)
                {
                    cout<<"eh ISOSCELES"<<endl;
                }
                else
                {
                    cout<<"eh ESCALENO"<<endl;
                }
            }
        }
    }   

    int Verifica_Existencia()
    {
        if ((sizeLado1>(sizeLado2+sizeLado3))
        || (sizeLado2>(sizeLado1+sizeLado3))
        || (sizeLado3>(sizeLado2+sizeLado1))
        || (sizeLado1<valorAbsoluto(sizeLado2-sizeLado3))
        || (sizeLado2<valorAbsoluto(sizeLado1-sizeLado3))
        || (sizeLado3<valorAbsoluto(sizeLado2-sizeLado1))){

            nao_existe();
            return 0;
        }
        return 1;
    }

    void nao_existe()
    {
        cout<<"\n\n\n O triangulo nao existe!"<<endl;
    }
  
    double valorAbsoluto(double num)
    {
        if (num >= 0) return num;
        else return -num;
    }
};

int main() {
    double l01,l02,l03=0;

    cout << "\nTriangulo 1: " <<endl;
    cout << "Tamanho do lado 1 do triangulo 1:"<<endl;
    cout << "> ";
    cin >> l01;

    cout<<"Tamanho do lado 2 do triangulo 1:"<<endl;
    cout<<"> ";
    cin >> l02;

    cout<<"Tamanho do lado 3 do triangulo 1:"<<endl;
    cout<<"> ";
    cin >> l03;

    Triangulo *t1 = new Triangulo(l01, l02, l03);
    cout<<"\nTriangulo 1 ";
    t1->Verifica_Tipo();


    cout << "\nTriangulo 2: " <<endl;
    cout << "Tamanho do lado 1 do triangulo 2:"<<endl;
    cout << "> ";
    cin >> l01;

    cout << "Tamanho do lado 2 do triangulo 2:"<<endl;
    cout << "> ";
    cin >> l02;

    cout << "Tamanho do lado 3 do triangulo 2:"<<endl;
    cout << "> ";
    cin >> l03;

    Triangulo *t2 = new Triangulo(l01, l02, l03);
    cout << "\nTriangulo 2 ";
    t2->Verifica_Tipo();


    cout << "\nTriangulo 3: " <<endl;
    cout << "Tamanho do lado 1 do triangulo 3:"<<endl;
    cout << "> ";
    cin >> l01;

    cout << "Tamanho do lado 2 do triangulo 3:"<<endl;
    cout << "> ";
    cin >> l02;

    cout << "Tamanho do lado 3 do triangulo 3:"<<endl;
    cout << "> ";
    cin>>l03;

    Triangulo *t3 = new Triangulo(l01, l02, l03);
    cout<<"\nTriangulo 3 ";
    t3->Verifica_Tipo();
}