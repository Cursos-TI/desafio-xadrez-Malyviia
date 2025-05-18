#include <stdio.h>

int main() {
    // ========================
    // MOVIMENTO DA TORRE (for)
    // ========================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);

    }

    printf("\n");

    // ==========================
    // MOVIMENTO DO BISPO (while)
    // ==========================

    int casasBispo = 5;
    int i = 1;
    printf("Movimento do Bispo:\n");
    while(i <= casasBispo) {
        printf("Cima Direita (%d)\n", i);
        i++;

    }

    printf("\n");

    // ==============================
    // MOVIMENTO DA RAINHA (do-while) 
    // ==============================
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf ("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);

    return 0;
}