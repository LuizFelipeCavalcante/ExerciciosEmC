// Exercicio 1
#include <stdio.h>

int main(){
int n;
printf("Digite seu numero: ");
scanf("%d", &n);
for(int i = 1; i <= n; i++){
	printf("%d ", 3*i);	
}
return 0;
}