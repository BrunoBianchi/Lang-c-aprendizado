#include <stdio.h>
#include <stdlib.h>

int main() {
    int colunas = 3, linhas = 3;
    // ponteiro de ponteiros
    int **matriz;
    // Alocando memoria para as linhas
    matriz = (int**) malloc(linhas * sizeof(int*));
    // Alocando memoria para as colunas de cada linha
    for(int i = 0; i<colunas;i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }
    //Definindo valores
    for(int i = 0; i<linhas;i++) {
        for(int j = 0 ; j< colunas; j ++) {
            matriz[i][j] = j + j;
            printf("%d ",matriz[i][j]);
        }
        puts("\n");
    }
    //Limpando a memoria da matriz
    free(matriz);
}