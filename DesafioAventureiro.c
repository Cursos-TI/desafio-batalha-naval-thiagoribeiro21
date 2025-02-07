#include <stdio.h>

// Definir o numero de linhas , colunas e o tamanho do navio
#define LINHAS 10
#define COLUNAS 10
#define TAMANHO_NAVIO 4

int main(){
    
    //Imprimir o que irá aparecer
    printf("Tabuleiro completo:\n");
    printf("\nNumero 3 = Posição ocupada por navio, Numero 0 = Posição vazia:\n");
    
    // Declarar a matriz 10x10
    int tabuleiro[LINHAS][COLUNAS] = {
        {0, 3, 3, 3, 3, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
        {0, 0, 0, 0, 3, 0, 0, 0, 0, 0},
        {0, 0, 0, 3, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {3, 3, 3, 3, 0, 3, 0, 0, 0, 0},
       
    };

    // Declarar uma repetição para imprimir a matriz
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            tabuleiro[LINHAS][COLUNAS] = tabuleiro[i][j];
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");// Para mostrar a matriz do jeito certo
    }
}