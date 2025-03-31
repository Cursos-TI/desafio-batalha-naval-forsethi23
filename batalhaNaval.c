#include <stdio.h>

void exibirTabuleiro(int tabuleiro[10][10]) {
    printf("   A  B  C  D  E  F  G  H  I  J\n");
     
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
    
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavios(int tabuleiro[10][10]) {
    // Navio horizontal (
    int navioHorizontal[3] = {3, 3, 3};
    int linhaH = 2; // Linha inicial 
    int colunaH = 4; // Coluna inicial 

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // Navio vertical (3 posições) 
    int navioVertical[3] = {3, 3, 3};
    int linhaV = 4; // Nova linha inicial 
    int colunaV = 7; // Nova coluna inicial 

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }
    
    // Navio diagonal principal (3 posições, começando no canto superior esquerdo)
    int linhaD1 = 0; // Linha inicial
    int colunaD1 = 0; // Coluna inicial
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }

    // Navio diagonal inversa (3 posições, começando no canto inferior esquerdo)
    int linhaD2 = 9; // Linha inicial
    int colunaD2 = 0; // Coluna inicial
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD2 - i][colunaD2 + i] = 3;
    }
}

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};

    
    // Exibir o tabuleiro vazio
    printf("Tabuleiro vazio:\n");
    exibirTabuleiro(tabuleiro);

    // Posicionar os navios no tabuleiro
    posicionarNavios(tabuleiro);

    // Exibir o tabuleiro com os navios posicionados
    printf("\nTabuleiro com navios posicionados:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}