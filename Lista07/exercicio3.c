// Exercicio 3

#include <stdio.h>

int positivo(int num){
int soma;
	for(int i = 1; i <= num; i++){
	if(num % i == 0){
	soma += i;
    }else{

    }
}
return soma;
}

int main(){
int num;
scanf("%d", &num);
printf("%d", positivo(num));
return 0;
}