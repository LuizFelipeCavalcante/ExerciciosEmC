#include <iostream>
#include <string>
using namespace std;

class Relogio{
   private: 
    int hora;
    int minuto;
    int segundo;

   public:
    //Construtor
    Relogio() : hora(0), minuto(0), segundo(0){}
   
    //getters
    int getHora(){
        return hora;
    } 
    int getMinuto(){
        return minuto;
    }
    int getSegundo(){
        return segundo;
    }

    //setters
    void setHora(int hora){
        this->hora = hora;
    }
    void setMinuto(int minuto){
        this->minuto = minuto;
    }
    void setSgegundo(int segundo){
        this->segundo = segundo;
    }

    //metodo
    void tempo(){
        segundo ++;
        if(segundo >= 60){
            segundo = 0;
            minuto ++;
        }
        if(minuto >= 60){
            minuto = 0;
            hora ++;
        }
    }
};
