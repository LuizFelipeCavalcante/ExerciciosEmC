#include <iostream>
#include <string>
using namespace std;

class CondicionadorAr{

    private:
        int potencia;

    public:
    CondicionadorAr(): potencia(0){}
    
    void setPotencia(int potencia){
        if(potencia <= 10 && potencia >= 0)
        this->potencia = potencia;
    }

    void tempreaturaExterna(float temp){
        potencia = temp/1.8;
    }

    float getTemperatura(){
        return potencia*1.8; 
    }



};

int main(){

    CondicionadorAr cond1;
    CondicionadorAr cond2;

    cond1.tempreaturaExterna(25);
    cond2.tempreaturaExterna(31);

    cond1.setPotencia(5);
    cond2.setPotencia(10);

    cout << cond1.getTemperatura() << cond2.getTemperatura() << endl;
    return 0;
}