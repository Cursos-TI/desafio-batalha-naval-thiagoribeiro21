#include <stdio.h>

int main(){
    printf("Desafio Batalha Naval - MateCheck\n");

    // Criando a Matriz conforme o jogo com as colunas sendo De 1 a 5 e as linhas de A a E.
    char * tabuleiro[5][5] = {
        {"A1", "B1", "C1", "D1", "E1"},
        {"A2", "B2", "C2", "D2", "E2"},
        {"A3", "B3", "C3", "D3", "E3"},
        {"A4", "B4", "C4", "D4", "E4"},
        {"A5", "B5", "C5", "D5", "E5"}
    };

    // Declaração da posição dos navios
    char * navio_horizontal[][2] = { "C1", "D1", "E1"};
    char * navio_vertical[][2] = { "A3", "A4", "A5"};

    // Imprimir a entrada das cordenadas do navio horizontal
    printf("\nCordenadas do navio horizontal:\n");

    // Imprimir as cordenadas do navio horizontal
    printf("\nParte do navio posicionada na casa: %s\n", tabuleiro[0][2]);
    printf("Parte do navio posicionada na casa: %s\n", tabuleiro[0][3]);
    printf("Parte do navio posicionada na casa: %s\n", tabuleiro[0][4]);

    // Imprimir a entrada das cordenadas do navio vertical
    printf("\nCordenadas do navio vertical:\n");

    // Imprimir as cordenadas do navio vertical
    printf("\nParte do navio posicionada na casa: %s\n", tabuleiro[2][0]);
    printf("Parte do navio posicionada na casa: %s\n", tabuleiro[3][0]);
    printf("Parte do navio posicionada na casa: %s\n", tabuleiro[4][0]);

    return 0;

}