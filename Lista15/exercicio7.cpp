#include <iostream>
#include <string>
using namespace std;


class Carro{
    private:
    float combustivel;
    int distancia;

    public:
    Carro(): combustivel(0),distancia(0){}

    void setCombustivel(float combustivel){
        if((this->combustivel + combustivel) <= 50)
        this->combustivel += combustivel;
    }

    void moverCarro(int distancia){
        combustivel = combustivel - distancia/15;
        this->distancia += distancia;
    }

    pair <float, int> getCombustivel(){
        return {combustivel, distancia};
    }

};


int main(){
    Carro carro1;
    Carro carro2;

    carro1.setCombustivel(20);
    carro2.setCombustivel(30);

    carro1.moverCarro(200);
    carro2.moverCarro(400);

    cout << carro1.getCombustivel().first << " " << carro1.getCombustivel().second << " " << carro2.getCombustivel().first << " " << carro2.getCombustivel().second << endl;

    return 0;
}