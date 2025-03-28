# include <stdio.h>


void calculaPotencias(int n, int *quadrado, int *cubo){
    *quadrado = n*n;
    *cubo = n*n*n;
}

int main(){
    int n, quadrado, cubo;
    scanf("%d", &n);
    calculaPotencias(n, &quadrado, &cubo);
    printf("%d %d", quadrado, cubo);
}