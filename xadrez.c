#include <stdio.h>

int main() {

    // Variáveis que armazenam a escolha do jogador
    int movimentoTorre;
    int movimentoBispo;
    int movimentoRainha;
    int movimentoCavalo;

    // Variáveis de controle dos loops
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    // Boas-vindas
    printf("VAMOS JOGAR XADREZ!!!");

    // Menu de escolha para a torre
    printf("Escolha para qual lado a torre vai:\n");
    printf("1. Torre direita\n");
    printf("2. Torre esquerda\n");
    printf("3. Torre baixo\n");
    printf("4. Torre cima\n");
    printf("\n");

    printf("Qual sua escolha:");
    scanf("%d", &movimentoTorre);
    printf("\n");

    //Menu de escolha para o bispo
    printf("Escolha para qual lado o bispo:\n");
    printf("1. Diagonal superior direita\n");
    printf("2. Diagonal superior esquerda\n");
    printf("3. Diagonal inferior direita\n");
    printf("4. Diagonal inferior esquerda\n");
    printf("\n");

    printf("Qual sua escolha:");
    scanf("%d", &movimentoBispo);
    printf("\n");

    //Menu de escolha para a rainha
    printf("Escolha para qual lado a rainha vai:\n");
    printf("1. Direita (horizontal)\n");
    printf("2. Esquerda (horizontal)\n");
    printf("3. Cima (vertical)\n");
    printf("4. Baixo (vertical)\n");
    printf("5. Diagonal superior direita\n");
    printf("6. Diagonal superior esquerda\n");
    printf("7. Diagonal inferior direita\n");
    printf("8. Diagonal inferior esquerda\n");


    printf("Qual sua escolha:");
    scanf("%d", &movimentoRainha);  // Lê a escolha do jogador
    printf("\n");

    printf("Escolha para qual lado o cavalo vai (movimento em L):\n");
    printf("1. 2 cima, 1 direita\n");
    printf("2. 2 cima, 1 esquerda\n");
    printf("3. 2 baixo, 1 direita\n");
    printf("4. 2 baixo, 1 esquerda\n");
    printf("5. 2 direita, 1 cima\n");
    printf("6. 2 direita, 1 baixo\n");
    printf("7. 2 esquerda, 1 cima\n");
    printf("8. 2 esquerda, 1 baixo\n");

    printf("Qual sua escolha:");
    scanf("%d", &movimentoCavalo);
    printf("\n");

    // Lê a escolha do jogador

    // Switch trata a escolha e simula o movimento com FOR
    switch (movimentoTorre) {
        case 1:
            for(torre; torre <= 5; torre++) {
                printf("Torre para casa da direita %d\n", torre);
            }
            break;
        case 2:
            for(torre; torre <= 5; torre++) {
                printf("Torre para casa da esquerda %d\n", torre);
            }
            break;
        case 3:
            for(torre; torre <= 5; torre++) {
                printf("Torre para casa da baixo %d\n", torre);
            }
            break;
        case 4:
            for(torre; torre <= 5; torre++) {
                printf("Torre para casa da cima %d\n", torre);
            }
            break;
        default:
            printf("Movimento invalido");
            break;
    }

    printf("\n");

    // Movimento do bispo com WHILE
    switch (movimentoBispo) {
    case 1:
        while (bispo <= 5) {
            printf("Bispo Diagonal superior direita %d\n", bispo);
            bispo++;
        }   
        break;
    case 2: 
        while (bispo <= 5) {
            printf("Bispo Diagonal superior esquerdo %d\n", bispo);
            bispo++;
        }   
        break;
    case 3:
        while (bispo <= 5) {
            printf("Bispo Diagonal inferior direita %d\n", bispo);
            bispo++;
        }   
        break;
    case 4:
        while (bispo <= 5) {
            printf("Bispo Diagonal inferior esquerdo %d\n", bispo);
            bispo++;
        }   
    
        default:
            printf("Opção invalidade\n");
            break;
        }

    printf("\n");

    // Movimento da rainha com DO-WHILE
    
    switch (movimentoRainha) {
    case 1:
        do {
            printf("rainha direita %d\n", rainha);
            rainha++;
        } while (rainha <= 8);
        break;
    case 2:
        do {
            printf("rainha esquerda %d\n", rainha);
            rainha++;
        } while (rainha <= 8);
        break;
    case 3:
        do {
            printf("rainha cima %d\n", rainha);
            rainha++;
        } while (rainha <= 8);
        break;
    case 4:
        do {
            printf("rainha baixo %d\n", rainha);
            rainha++;
        } while (rainha <= 8);
        break;
    case 5:
        do {
            printf("rainha diagonal superior direita %d\n", rainha);
            rainha++;
        } while (rainha <= 8);
        break;
    case 6: 
        do {
            printf("rainha diagonal superior esquerda %d\n", rainha);
            rainha++;
        } while (rainha <= 8);
        break;
    case 7:
        do {
            printf("rainha diagonal inferior direita %d\n", rainha);
            rainha++;
        } while (rainha <= 8);
        break;
    case 8:
        do {
            printf("rainha diagonal inferior esquerda %d\n", rainha);
            rainha++;
        } while (rainha <= 8);
        break;
    default:
        printf("Opção invalidade\n");
        break;
    }

    printf("\n");

    switch (movimentoCavalo) {
    case 1:
        for (int i = 1; i <= 2; i++) {
            printf("Cavalo cima\n");
        }
        printf("Cavalo direita\n");
        
        break;
    case 2:
        for (int i = 1; i <= 2; i++) {
            printf("Cavalo cima\n");
        }
        printf("Cavalo esquerda\n");
        
        break;
    case 3:
        for (int i = 1; i <= 2; i++) {
            printf("Cavalo baixo\n");
        }
        printf("Cavalo direita\n");
        
        break;
    case 4:
        for (int i = 1; i <= 2; i++) {
            printf("Cavalo baixo\n");
        }
        printf("Cavalo esquerda\n");
        
        break;
    case 5:
        for (int i = 1; i <= 2; i++) {
            printf("Cavalo direita\n");
        }
        printf("Cavalo cima\n");
        
        break;
    case 6:
        for (int i = 1; i <= 2; i++) {
            printf("Cavalo direita\n");
        }
        printf("Cavalo baixo\n");
        
        break;
    case 7:
        for (int i = 1; i <= 2; i++) {
            printf("Cavalo esquerda\n");
        }
        printf("Cavalo cima\n");
        
        break;
    case 8:
        for (int i = 1; i <= 2; i++) {
            printf("Cavalo esquerda\n");
        }
        printf("Cavalo baixo\n");
        
        break;
    default:
        printf("Opção invalidade\n");
        break;
    }

    return 0;
}
