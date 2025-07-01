#include <stdio.h>
#include <string.h>


int conta(char *string, char letra){

    if(*string == '\0'){
        return 0;
    }
    else{
        return (*string==letra?1:0) + conta(string += 1, letra);
    }
}




int main(){
    char string[200];
    char letra;
    scanf("%[^\n]", string);
    scanf(" %c", &letra);

    int r = conta(string, letra);
    printf("%d\n", r);

    return 0;
}
