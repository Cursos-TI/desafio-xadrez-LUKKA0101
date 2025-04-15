#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas, int direcao) {
    if (casas <= 0) return; // Caso base

    switch (direcao) {
        case 0: // Cima
            printf("Cima\n");
            moverTorre(casas - 1, direcao);
            break;
        case 1: // Baixo
            printf("Baixo\n");
            moverTorre(casas - 1, direcao);
            break;
        case 2: // Esquerda
            printf("Esquerda\n");
            moverTorre(casas - 1, direcao);
            break;
        case 3: // Direita
            printf("Direita\n");
            moverTorre(casas - 1, direcao);
            break;
    }
}

// Função recursiva para mover o Bispo
void moverBispo(int casas, int diagonal) {
    if (casas <= 0) return; // Caso base

    for (int i = 0; i < casas; i++) {
        switch (diagonal) {
            case 0: // Diagonal superior direita
                printf("Cima\n");
                printf("Direita\n");
                break;
            case 1: // Diagonal superior esquerda
                printf("Cima\n");
                printf("Esquerda\n");
                break;
            case 2: // Diagonal inferior direita
                printf("Baixo\n");
                printf("Direita\n");
                break;
            case 3: // Diagonal inferior esquerda
                printf("Baixo\n");
                printf("Esquerda\n");
                break;
        }
    }
    moverBispo(casas - 1, diagonal); // Chamada recursiva
}

// Função recursiva para mover a Rainha
void moverRainha(int casas, int direcao) {
    if (casas <= 0) return; // Caso base

    moverTorre(casas, direcao); // Movimentação na direção da Torre
    moverBispo(casas, direcao); // Movimentação na direção do Bispo
}

// Função para mover o Cavalo com loops aninhados
void moverCavalo() {
    for (int i = 0; i < 2; i++) { // Duas casas para cima
        for (int j = 0; j < 1; j++) { // Uma casa para a direita
            if (i == 0 && j == 0) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    }
}

int main() {
    int casas = 3; // Número de casas a serem movidas

    printf("Movimento da Torre:\n");
    moverTorre(casas, 0); // Cima
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casas, 0); // Diagonal superior direita
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casas, 0); // Cima
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(); // Movimento do Cavalo
    printf("\n");

    return 0;
}