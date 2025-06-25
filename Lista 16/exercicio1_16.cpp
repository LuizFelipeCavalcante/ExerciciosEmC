#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Ponto{

    private:
    int x;
    int y;

    public:
    Ponto(): x(0), y(0){}

    void setX(int x){
        this->x = x;
    }
    
    void setY(int y){
        this->y = y;
    }

    int getX(){
        return x;
    }
    
    int getY(){
        return y;
    }

    float distanciaPonto(Ponto ponto){
        return sqrt((pow((ponto.x - x),2))+(pow((ponto.y - y),2)));
    }
};

class Circulo : public Ponto{

    protected:
    float raio;

    public:
    Circulo(): raio(0){}

    void setRaio(float raio){
        this->raio = raio;
    }
    float getRaio(){
        return raio;
    }
    float calcArea(){
        return M_PI*raio*raio;
    }
    float calcCircunferencia(){
        return 2*M_PI*raio;
    }

};

class Roda : public Circulo{

    string material;
    int aro;
    string fabricante;

   
    public:
    Roda(): material(""), aro(0), fabricante(){}
    void setAro(int aro){
        this->aro = aro;
    }
    float getAro(){
        return aro;
    }

    void setFabricante(string fabricante){
        this->fabricante = fabricante;
    }
    string getFabricante(){
        return fabricante;
    }

    void setMaterial(string material){
        this->material = material;
    }
    string getMaterial(){
        return material;
    }
};

class Esfera : public Circulo{
    public:
    float calcVolume(){
        return 4/3*M_PI*raio*raio*raio;
    }

};  

int main() {
    Ponto p;
    p.setX(3);
    p.setY(4);
    cout << p.getX() << " " << p.getY() << "\n";

    Circulo c;
    c.setX(5);
    c.setY(6);
    c.setRaio(10);
    cout << c.getX() << " " << c.getY() << " " << c.getRaio() << "\n";
    cout << c.calcArea() << "\n";
    cout << c.calcCircunferencia() << "\n";

    Roda r;
    r.setX(0);
    r.setY(0);
    r.setRaio(15);
    r.setMaterial("Alumínio");
    r.setAro(17);
    r.setFabricante("ACME");
    cout << r.getX() << " " << r.getY() << " " << r.getRaio() << " "
         << r.getMaterial() << " " << r.getAro() << " " << r.getFabricante() << "\n";

    Esfera e;
    e.setX(1);
    e.setY(2);
    e.setRaio(5);
    cout << e.getX() << " " << e.getY() << " " << e.getRaio() << "\n";
    cout << e.calcVolume() << "\n";

    cout << p.distanciaPonto(c) << "\n";

    return 0;
}
