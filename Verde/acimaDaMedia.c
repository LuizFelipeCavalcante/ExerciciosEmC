#include <stdio.h>

int main(){
    int c, n;
    int total = 0, acima = 0;
    
    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        total = 0, acima = 0;
        scanf("%d", &n);
        int numeros[n];

        for(int j = 0; j < n; j++){
            scanf("%d", &numeros[j]);
            total += numeros[j];
        }
        for(int k = 0; k < n; k++ ){
            if(numeros[k] > (total/n)){
                acima ++;
            }   
        }
        printf("%.3f%\n", (float)acima/n*100);
    }

    return 0;
}