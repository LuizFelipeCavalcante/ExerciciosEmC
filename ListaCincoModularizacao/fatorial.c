#include <stdio.h>

float fatorial(int n){
	
int resultado = 1;
	for(int i = n; i > 0; i--){
	resultado *= i;
}	
	return resultado;
}


float nesimoTermo(int n, float x){

	int numerador, denominador;
	
	numerador = 2*n*pow(x,n);
	denominador = fatorial(2*n+1);
	return  numerador/(float)denominador;
				

}




int main(){

int a;
float b;
scanf("%d %f", &a &b);
printf("%f",nesimoTermo(a, b) );

}