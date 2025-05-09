#include <string.h>

int main(){
    int n = 0;
char str[20];
printf("Digite uma string: ");
scanf("%[^\n]", str);

while (str[n] != '\0')
{
  n++;
}

printf("%d", n);
    


return 0;
}