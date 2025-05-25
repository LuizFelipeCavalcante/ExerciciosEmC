#include <stdio.h>
#include <stdlib.h>

int main(){

    int n; 
    scanf("%d", &n);
    
    int *T;
    T = (int *)malloc(n * sizeof(int));

    if (T == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;  
    }

    int cp, cm;
    for(int i = 0; i < n; i++){
        scanf("%d", &T[i]);
        if(T[i] == 1){
            cp ++;
        }else{
            cm ++;
        }
    }   
    int p, m;
    scanf("%d", &p);
    scanf("%d", &m);
    
    if(p == cp && m == cm){
        printf("S");
    }else{
        printf("N");
    }
    free(T);
    return 0;
}