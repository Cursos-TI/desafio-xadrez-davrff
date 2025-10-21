#include <stdio.h>

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++)
    {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    for (i = 1; i <= casasBispo; i++)
    {
        printf("Cima, Direita\n");
    }
    
    

    return 0;
}
