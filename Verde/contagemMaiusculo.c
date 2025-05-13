#include <string.h>
#include <ctype.h>

int main(){
char str[100];
int n = 0;
do{
scanf("%[^\n]", str);
int len = strlen(str);
for(int i = 0; i < len; i++){
    if (isupper(str[i])) {
        n ++;
    }
}
printf("%d \n", n);
n = 0;
}while(str != "FIM");
return 0;
}