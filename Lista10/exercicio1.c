#include <string.h>

int main(){
char str[20];
printf("Digite uma string: ");
scanf("%[^\n]", str);
printf("%s \n", str);
return 0;
}