/*
Crie um programa C++ para gerenciar informação sobre carrosvendidas por uma concessionária. 
Cada carro deve ser representado por uma estrutura:
- Modelo
- Marca
- Ano de fabricação
- Preço
- Data Venda
O programa deve pedir ao usuario quantos carros serão cadastrados. Ler os dados de cada carro.
Armazenar os dados em um vetor.
Exibir os dados do carro mais caro.
Utiliza alocção dinâmica pela armazenamento.
*/

#include <iostream>
#include <string>
using namespace std;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    string modelo;
    string marca;
    int anoFab;
    double preco;
    Data dataVenda;
}Carro;

void carroMaisCaro(Carro lista[], int n){

    int indiceMaisCaro = 0;
    for(int i = 1; i < n; i++){
        if(lista[i].preco > lista[indiceMaisCaro].preco){
            indiceMaisCaro = i;
        }
    }
    cout <<"Carro mais caro: "<<endl;
    cout <<"Preco: "<<lista[indiceMaisCaro].preco<<endl; 
    cout <<"DataVenda: "<<lista[indiceMaisCaro].dataVenda.dia<<"/"<<lista[indiceMaisCaro].dataVenda.mes<<"/"<<lista[indiceMaisCaro].dataVenda.ano<<endl
  <<"Modelo: "<<lista[indiceMaisCaro].modelo<<endl; 
     
}

int main()