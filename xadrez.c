#include <stdio.h>


int main() {
    
    //Movimento da Torre
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    //Movimento do Bispo
    int i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }

    //Movimento da Rainha
    int z = 0;
    do {
        printf("Esquerda\n");
        z++;
    } while (z < 5); {
    }

    //Movimento do Cavalo
    for (int i= 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}