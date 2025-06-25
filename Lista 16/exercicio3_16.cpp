#include <iostream>
#include <string>
using namespace std;

class Empregado {
protected:
    string nome;
    double salarioBase;
    double imposto;
public:
    Empregado() : nome(""), salarioBase(0), imposto(0) {}
    Empregado(string n, double s, double i) : nome(n), salarioBase(s), imposto(i) {}
    void setNome(string n) { nome = n; }
    void setSalarioBase(double s) { salarioBase = s; }
    void setImposto(double i) { imposto = i; }
    string getNome() { return nome; }
    double getSalarioBase() { return salarioBase; }
    double getImposto() { return imposto; }
};

class Vendedor : public Empregado {
    double valorVendas;
    double comissao;
public:
    Vendedor() : valorVendas(0), comissao(0) {}
    Vendedor(string n, double s, double i, double v, double c)
        : Empregado(n, s, i), valorVendas(v), comissao(c) {}
    void setValorVendas(double v) { valorVendas = v; }
    void setComissao(double c) { comissao = c; }
    double getValorVendas() { return valorVendas; }
    double getComissao() { return comissao; }
    double calcularSalario() {
        return (salarioBase + comissao * valorVendas) * (1 - imposto);
    }
};

int main() {
    Vendedor v1("Ana", 3000, 0.1, 50000, 0.05);
    Vendedor v2("Bruno", 2500, 0.08, 30000, 0.06);
    cout << v1.getNome() << " " << v1.calcularSalario() << endl;
    cout << v2.getNome() << " " << v2.calcularSalario() << endl;
    return 0;
}
