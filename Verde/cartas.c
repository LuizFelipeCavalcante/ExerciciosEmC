#include <stdio.h>

int main(){
    int cartas[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &cartas[i]);
    }
    
        if(cartas[4] < cartas[3]){
            if(cartas[3] < cartas[2]){
                if(cartas[2] < cartas[1]){
                    if(cartas[1] < cartas[0]){
                        printf("D");
                    }else{printf("N");}
                }else{printf("N");}
            }else{printf("N");}
        }
        else if(cartas[4] > cartas[3]){
            if(cartas[3] > cartas[2]){
                if(cartas[2] > cartas[1]){
                    if(cartas[1] > cartas[0]){
                        printf("C");
                    }else{printf("N");}
                }else{printf("N");}
            }else{printf("N");}
        }else{printf("N");}
    

    return 0;
}
