#include <string.h>

int contacarateresalfa(char*a, int tam){
 int contador = 0;
    for(int i = 0; i < tam; i++){
        int b = a[i];

        if(b >= 48){
            if(b <= 57){
                contador ++;
            }
            if(b >= 65){
                if(b <= 90){
                    contador ++;
                }
            }
            if(b >= 97){
                if(b <= 122){
                    contador ++;
                }
            }
        }
    }
    return contador;
}


