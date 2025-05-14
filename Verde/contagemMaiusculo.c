#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
char str[100];
int n = 0;

scanf(" %[^\n]", str);

while(strcmp(str, "FIM") != 0){


int len = strlen(str);
for(int i = 0; i < len; i++){
    if (isupper(str[i])) {
        n ++;
    }
}
printf("%d\n", n);
scanf(" %[^\n]", str);
n = 0;
}
return 0;
}