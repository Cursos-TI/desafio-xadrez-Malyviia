#include <stdio.h>

//=== TORRE ===
void moverTorre(int passo) { 
   if (passo == 0) return;
   printf("Direita\n");
   moverTorre(passo - 1);

}

//=== BISPO ===
void moverBispo(int passo) {
   if(passo == 0) return;


   for (int i = 0; i < 1; i++) {
       for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
       }
    }

    moverBispo(passo - 1);
}   

// === RAINHA ===
void moverRainha(int passo) {
    if (passo == 0) return;
    printf("Esquerda\n");
    moverRainha(passo - 1);
}

// === CAVALO ===
void moverCavalo() {
    printf("Movimento do Cavalo\n");

    int cima = 0, direita = 0;

    for(int i = 0; i < 3; i++) {
        if (i < 2) {
            cima++;
            if(cima == 1) continue;
            printf("Cima\n");    
        } else{
            direita++;
            if(direita > 1) break;
            printf("Direita\n");
        }
    }
    printf("\n");
    
}

int main() {
    printf("Movimento da Torre\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento do Bispo");
    moverBispo(5);
    printf("\n");

    printf("Movimento da Rainha");
    moverRainha(8);
    printf("\n");

    moverCavalo();

    return 0;
}