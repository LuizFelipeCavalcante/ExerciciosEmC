# include <stdio.h>


    int somaf(int v[], int tam){
        int soma = 0;
        for(int i = 0; i < tam; i++){
            soma += v[i];
        }
        return soma;
    }

    int main(){
        int vet[5] = {7,40,15,93,15};
        int resultado;
        resultado = somaf(vet, 5);
        //printf resultado;
        return 0;
    }
    
