#include <stdio.h>

int main(){

    int n, m;
    char l;
    int e[31] = {0}, d[31] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %c", &m, &l);
        if(l == 'E'){
            e[m-30] ++;
        }else if(l == 'D'){
            d[m-30] ++;
        }
    }
    int contador = 0;
    for(int i = 0; i < 30; i++){
        while(e[i] > 0 && d[i] > 0){
            
            e[i] --;
            d[i] --;
            contador ++;
        
        }
    }
        printf("%d", contador);

    return 0;
}