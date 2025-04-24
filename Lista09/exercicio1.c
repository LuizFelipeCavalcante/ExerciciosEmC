# include <stdio.h>
void buscar(int vetor[20], int numero){
    for(int i = 0; i < 20; i++){
        if(vetor[i] == numero){
            printf("%d ", i);
        }
    }
}
int main(){
    int vetor[20], numero;
    srand(time(NULL));
    scanf("%d", numero);
    
     for(int i = 0; i < 20; i++){
        vetor[i] = rand() % 100 + 1;
     }
     buscar(vetor, numero);

    
    return 0;
}