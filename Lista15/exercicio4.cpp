#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class CirculoSimples{
    private:
    float area;
    float raio;
    float circunferencia;
    float x, y;
    
    CirculoSimples(): x(0), y(0), circunferencia(0), area(0), raio(0){}
    private:
        void CalcularArea(){
            area = M_PI*(raio*raio);
        }
        void Circunferencia(){
            circunferencia = 2*M_1_PI*raio;
        }
        float DistanciaCirculo(CirculoSimples circulo){
            return sqrt((pow((circulo.x - x),2))+(pow((circulo.y - y),2)));
        }

    public:
        void raio(float raio){
            this->raio = raio;
        }    
        void aumentarRaio(float percentual){
            raio += raio*(percentual/100);
        }
        void centroCirculo(float x, float y){
            this->x = x;
            this->y = y;
        }
        void ImprimeRaio(){
            cout << raio << endl;
        }
        void ImprimeCentro(){
            cout << x << y << endl;
        }
        void ImprimeCentro(){
            cout << area << endl;
        }
};