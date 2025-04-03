// Exercicio 7

#include <stdio.h>

int potencia(int b, int e){
if(e == 0){
return 1;
} else{
return b*potencia(b, e-1);

}
}



int main(){
int b, e;

scanf("%d", &b);
scanf("%d", &e);

printf("%d", potencia(b, e));

return 0;
}