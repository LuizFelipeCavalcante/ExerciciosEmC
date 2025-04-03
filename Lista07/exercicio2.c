// Exercicio 2 
# include <stdio.h>

int main(){
int x, y, impar;
scanf("%d", &x);
scanf("%d", &y);
for(int i = x; i <= y; i++){
	if(i % 2 != 0){
	printf("%d ", i);
	impar = 1;
}else{
	impar = 0;
}
}

}