#include <string.h>
int main(){
char str[20];
printf("Digite uma string: ");
scanf("%[^\n]", str);
for(int i = 0; i < 4; i++){
    printf("%C", str[i]);
}

return 0;
}