#include <stdio.h>

// Definir tamanho de linhas e colunas
#define LINHA 10
#define COLUNA 10

int main(){

    // Variáveis da matriz e habilidade
    int matriz[10][10] = {0};
    int habilidade;

    // Imprimir a escolha da habilidade
    printf("Escolha a habilidade:\n");
    printf("1. Cone\n");
    printf("2. Octaedro\n");
    printf("3. Cruz\n");
    printf("Digite qualquer numero maior que 4 para sair.\n");
    scanf("%d", &habilidade);

    // Sistema de repetição para a pessoa escolher qual habilidade quer ver
    while(habilidade < 4){

    // Menu para a escolha
    switch(habilidade){
        case 1 : 
        // Matriz do cone
        printf("\nCone:\n");
        int cone [LINHA][COLUNA] = {
                    {0, 0, 0, 0, 0, 1, 0, 0 ,0 ,0},
                    {0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                    {0, 0, 0, 1, 1, 1, 1, 1, 0, 0},
                    {0, 0, 1, 1, 1, 1, 1, 1, 1, 0},
                    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                };
                // Estrutura de repetição para Mostrar a matriz do cone
        for (int i = 0; i < LINHA; i++){
            for(int j = 0; j < COLUNA; j++){
             matriz [i][j] = cone[i][j];
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
        break;
        case 2:
        // Matriz do octaedro
           printf("\nOctaedro:\n");
           int octaedro[LINHA][COLUNA] = {
                    {0, 0, 0, 0, 0, 1, 0, 0 ,0 ,0},
                    {0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                    {0, 0, 0, 1, 1, 1, 1, 1, 0, 0},
                    {0, 0, 1, 1, 1, 1, 1, 1, 1, 0},
                    {0, 0, 0, 1, 1, 1, 1, 1, 0, 0},
                    {0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                    {0, 0, 0, 0, 0, 1, 0, 0 ,0 ,0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           };
           // Estrutura de repetição para Mostrar a matriz do octaedro
           for (int i = 0; i < LINHA; i++){
            for(int j = 0; j < COLUNA; j++){
             matriz [i][j] = octaedro[i][j];
                printf("%d", matriz[i][j]);
            }
            printf("\n");

        }
    break;
    case 3:
    // Matriz da cruz
    printf("\nCruz:\n");
      int cruz[LINHA][COLUNA] = {
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},

      };
      // Estrutura de repetição para Mostrar a matriz da cruz
      for (int i = 0; i < LINHA; i++){
            for(int j = 0; j < COLUNA; j++){
             matriz [i][j] = cruz[i][j];
                printf("%d", matriz[i][j]);
            }
            printf("\n");

        }
        break;
        break;
        default:
         printf("Opção inválida!\n");
         break;

    
     }
        // Escolher habilidade no fim de cada loop
        printf("\nEscolha a habilidade:\n");
        printf("1. Cone\n");
        printf("2. Octaedro\n");
        printf("3. Cruz\n");
        printf("Digite qualquer numero maior que 4 para sair.\n");
        scanf("%d", &habilidade);
}
// Imprimir que esta saindo do jogo
printf("Saindo do jogo...\n");
}