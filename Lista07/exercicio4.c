// Exercicio 4

#include <stdio.h>

void atualizarcontador(int num, int *contador){
	
	if(num % 2 == 0){
	*contador = *contador+1;
} return;
}

int main(){
int contador = 0;
int num;
do{
scanf("%d", &num);
atualizarcontador(num, &contador);


}while(num =! 0);
printf("\n %d", contador);
return 0;
} 