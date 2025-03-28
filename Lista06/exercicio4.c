#include <stdio.h>

int main()
{
    int menu = 0;
    int a, b;
    while (menu < 5)
    {
        printf("1. Somar dois numeros \n2. Subtrair dois numeros \n3. Multiplicar dois numeros \n4. Dividir dois numeros \n5. Sair \n");

        scanf("\n%d", &menu);

        if (menu == 5)
        {
        }
        else
        {
            printf("Digite o primeiro: ");
            scanf("%d", &a);
            printf("Digite o segundo: ");
            scanf("%d", &b);
            switch (menu)
            {

            case 1:
                printf("Resultado: %d\n", a + b);
                break;

            case 2:
            printf("Resultado: %d\n", a - b);
                break;

            case 3:
            printf("Resultado: %d\n", a * b);
                break;

            case 4:
            if(b == 0){
                printf("Divisão de 0 nao pode\n");
            }else{
            printf("Resultado: %d\n", a / b);}

                break;

            default:
                printf("Opção invalida");
            }
        }
    }
}