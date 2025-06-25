#include <iostream>
#include <string>
using namespace std;

class Televisao{

    private:
    int som;
    int canal;

    public:
    Televisao(): som(0), canal(0){}

    void setSom(bool som){
        if(som == 1){
            if(this->som == 100){

            }else{
                this->som ++;
            }
        }else{
            if(this->som == 0){

            }else{
                this->som --;
            }
        }
    }

    void setCanal(int canal){
        this->canal = canal;
    }

    int getCanal(){
        return canal;
    }
    
    int getSom(){
        return som;
    }
};


int main(){
    
    Televisao tv;

    tv.setCanal(10);
    tv.setSom(1);

    cout << tv.getCanal() << "  "<< tv.getSom() << endl;

    
    return 0;
}
