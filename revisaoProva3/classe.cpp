#include <iostream>
#include <string>
using namespace std;

class Funcionario{
    public:
    string nome;
    double salarioBase;
    double bonus;

   
    Funcionario(): nome(" "), salarioBase(0), bonus(0){}

    
    double salarioTotal(){
        return salarioBase+bonus;
    }
};

int main(){

    Funcionario f1;
    
    getline(cin, f1.nome);
    cin >> f1.salarioBase;
    cin >> f1.bonus; 
    cout << f1.salarioTotal();
    return 0;
}