#include <stdio.h>

int main() {

    // Declrando as variaveis que define quantas casas cada peça vai se mover.

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Variavel de controle 

    int i;

    // MOVIMENTO DA TORRE
    // A Torre se move em linha reta e vertical
    // Simulamos o movimento dela 5 casas a direita

    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++)
    {
        printf("Direita\n");
    }

    // MOVIMENTO DO BISPO
    // O Bispo se move apenas nas diagonais
    // Cada casa pecorrida combina duas direçoes, cima e direita

    printf("\nMovimento do Bispo:\n");
    for (i = 1; i <= casasBispo; i++)
    {
        printf("Cima, Direita\n");
    }

    // MOVIMENTO DA RAINHA
    // A Rainha pode se mover em todas direções
    // Simulamos o movimentos dela 8 casas para a esquerda

    printf("\nMovimento da Rainha\n");
    for (i = 1; i <= casasRainha; i++)
    {
        printf("Esquerda\n");
    }
    
    // FIM DO PROGRAMA
    return 0;
}
