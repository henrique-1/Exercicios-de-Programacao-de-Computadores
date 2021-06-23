#include <iostream>
#include <stdio.h>

using namespace std;

class Moto
{
    public:
        string Fabricante;
        string Nome;
        int AnoFabricacao;
        int Cilindradas;
        int Potencia;
        string Transmissao;
        int numMarchas;
        string Cor;
        string Combustivel;
        string ConsumoCidade;
        string ConsumoEstrada;
};

class Funcionario
{
    public:
        string Nome;
        int RegistroGeral;
        int CPF;
        int dia;
        int mes;
        int ano;
        float altura;
        string Funcao;
        double Salario;
};


class Professor
{
    public:
        //Dados
        string Nome;
        string RG;
        string CPF;

        //Data Nascimento
        int Dia;
        int Mes;
        int Ano;

        //Endereço
        string Rua;
        string Bairro;
        string Cidade;
        string Estado;

        //Informações de Formação
        string Formacao;
        string Faculdade;

        //Informações de Trabalho
        string ProntuarioProfessor;
        string Funcao;
        string CursoLeciona;
        string MateriaLeciona;
        float Salario;
        
        //Infromações Contratação
        int DiaContratacao;
        int MesContratacao;
        int AnoContratacao;

};

class Aluno
{
    public:
        //Dados
        string Nome;
        string RG;
        string CPF;

        //Data Nascimento
        int Dia;
        int Mes;
        int Ano;

        //Endereço
        string Rua;
        string Bairro;
        string Cidade;
        string Estado;

        //Informações
        string ProntuarioAluno;
        string Funcao;
        string CursoEstuda;
        string Turma;
        
        //Infromações
        int DiaEntrada;
        int MesEntrada;
        int AnoEntrada;

};

int main()
{

    return 0;
}