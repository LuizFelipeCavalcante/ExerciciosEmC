// Exercicio 5 
#include <stdio.h>

int maior(int a, int b){
	if(a > b){
return a;
}else{
return b;
}
}

int main(){
int a, b;

scanf("%d", &a);
scanf("%d", &b);
printf("\n O maior: %d", maior(a, b));
return 0;
}
