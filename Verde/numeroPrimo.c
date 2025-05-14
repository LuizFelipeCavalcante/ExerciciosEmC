#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int n = 0;
    for(a; a <= b; a++ ){
        for(int i = 2; i < a; i++){
            if(a % i == 0){
                n = 1;
                break;
            }
        }
        if(n == 0){
            printf("%d ", a);
        }
        n = 0;
    }


    return 0;
}