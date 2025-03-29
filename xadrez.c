#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    // Movimentação da Torre: 5 casas para a direita
    printf("Desafio Xadrez!\n");
    printf("Movimento da Torre:\n");
    int i;
    for(i = 0; i < 5; i++) {
        printf("Direita\n");  // Torre move-se 5 casas para a direita
    }

    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while(j < 5) {
        printf("Cima\n");
        printf("Direita\n");
        j++;  // O Bispo move-se 5 casas na diagonal
    }

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");  // Rainha move-se 8 casas para a esquerda
        k++;
    } while(k < 8);

    return 0;
}

 