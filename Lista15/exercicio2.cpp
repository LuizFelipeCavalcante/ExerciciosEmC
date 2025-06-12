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
};
int main()
{
    // Criando pessoa1 com construtor
    Pessoa pessoa1("Joao", 25, 1.75);
    // Criando pessoa2 e preenchendo com set
    Pessoa pessoa2;
    string nome;
    int idade;
    float altura;
    cout << "Digite o nome da pessoa2: ";

    getline(cin, nome);
    pessoa2.setNome(nome);
    cout << "Digite a idade da pessoa2: ";
    cin >> idade;
    pessoa2.setIdade(idade);
    cout << "Digite a altura da pessoa2 (em metros): ";
    cin >> altura;
    pessoa2.setAltura(altura);
    cout << endl
         << "Dados da pessoa1:" << endl;
    pessoa1.imprimirDados();
    cout << endl
         << "Dados da pessoa2:" << endl;
    pessoa2.imprimirDados();
    return 0;
}