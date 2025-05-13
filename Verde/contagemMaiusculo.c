#include <string.h>

int main(){
char str[100];
int n = 0;
scanf("%[^\n]", str);
do{
int len = strlen(str);
for(int i = 0; i < len; i++){
    printf("%C", str[i]);
}
}while(str != "FIM");
return 0;
}