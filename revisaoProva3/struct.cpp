#include <iostream>
#include <string>
using namespace std;

struct Editora{
    string nome;
    string cidade;
};

struct Livro{
     string titulo;
    string autor;
    int ano;
    Editora editora;

};

int main(){

    Livro livroVet[1000];

    for(int i = 0; i < 1000; i ++){
        getline(cin, livroVet[i].titulo);
        getline(cin, livroVet[i].autor);
        cin >> livroVet[i].ano;
        cin.ignore();
        getline(cin, livroVet[i].editora.nome);
        getline(cin, livroVet[i].editora.cidade);
    }
    for(int i = 0; i < 1000; i ++){
        cout << livroVet[i].titulo  << "\n";
        cout << livroVet[i].autor << "\n";
        cout << livroVet[i].ano << "\n";
        cout << livroVet[i].editora.nome << "\n";
        cout << livroVet[i].editora.cidade << "\n";
    }

    return 0;
}