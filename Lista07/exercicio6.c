// Exercicio 6

#include <stdio.h>

float soma(int n){
float total;

	for(int i = 1; i <= n; i++){
	total += 1/i;
    }
return total;
}


int main(){
int n;
scanf("%d", &n);
printf("%f", soma(n));
return 0;
}