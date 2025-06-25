#include <iostream>
#include <vector>
using namespace std;

struct Data {
    int dia, mes, ano;
};

struct Carro {
    string modelo, marca;
    int anoFabricacao;
    double preco;
    Data dataVenda;
};

void carroMaisCaro(const vector<Carro>& v) {
    const Carro* p = &v[0];
    for (int i = 1; i < v.size(); i++) {
        if (v[i].preco > p->preco) p = &v[i];
    }
    cout << p->preco << " "
         << p->dataVenda.dia << '/'
         << p->dataVenda.mes << '/'
         << p->dataVenda.ano << '\n';
}

int main() {
    vector<Carro> v = {
        {"Uno", "Fiat", 2010, 25000, {1,1,2024}},
        {"Civic", "Honda", 2022, 132000, {15,3,2025}},
        {"Gol", "VW", 2018, 42000, {7,5,2025}}
    };
    carroMaisCaro(v);
    return 0;
}
