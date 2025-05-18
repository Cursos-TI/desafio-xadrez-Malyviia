#include <stdio.h>

int main() {
    printf("Movimento do Cavalo (em L: 2 para Baixo, 1 para Esquerda)\n");

    int movimentosCavalo = 3;

    for (int i = 1; i <= movimentosCavalo; i++) {
        printf("Movimento em L %d:\n", i);


        int passo = 1;
        while (passo <= 2) {
            printf("Baixo\n");
            passo++;

        }

        printf("Esquerda\n");
    }   

    return 0;

}