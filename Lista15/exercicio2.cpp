#include <iostream>
#include <string>
using namespace std;

class Elevador
{
private:
    string nome;
    int andarAtual;
    int totalAndares;
    int capacidade;
    int numeroPessoas;

public:
    Elevador(string nome, int andarAtual, int totalAndares, int capacidade, int numeroPessoas)
    {
        this->nome = nome;
        this->andarAtual = andarAtual;
        this->totalAndares = totalAndares;
        this->capacidade = capacidade;
        this->numeroPessoas = numeroPessoas;
    }

    // Construtor padrao (opcional)
    Elevador()
    {
        nome = " ";
        andarAtual = 0;
        totalAndares = 0;
        capacidade = 0;
        numeroPessoas = 0;
    }

    // Metodos set
    void setNome(string nome)
    {
        this->nome = nome;
    }
    void setAndarAtual(int andarAtual)
    {
        this->andarAtual = andarAtual;
    }
    void setTotalAndares(int totalAndares)
    {
        this->totalAndares = totalAndares;
    }
    void setCapacidade(int capacidade)
    {
        this->capacidade = capacidade;
    }
    void setNumeroPessoas(int numeroPessoas)
    {
        this->numeroPessoas = numeroPessoas;
    }

    // Metodos get
     string getNome()
    {
        return nome;
    }
    int getAndarAtual()
    {
        return andarAtual;
    }
    int getTotalAndares()
    {
        return totalAndares;
    }
    int getCapacidade()
    {
        return capacidade;
    }
    int getNumeroPessoas()
    {
        return numeroPessoas;
    }
    
    //Metodos
    void Inicializa(int capacidade, int totalAndares)
    {
        nome = " ";
        andarAtual = 0;
        this->totalAndares = 0;
        this->capacidade = capacidade;
        numeroPessoas = 0;
    }
    void Entra()
    {
        if(numeroPessoas < capacidade){
            numeroPessoas ++;
        }
    }
    void Sai(){
        if(numeroPessoas > 0){
            numeroPessoas--;
        }
    }
    void Sobe(){
        if(andarAtual > totalAndares){
            andarAtual++;
        }
    }
    void Desce(){
        if(andarAtual > 0){
            andarAtual--;
        }
    }
};

