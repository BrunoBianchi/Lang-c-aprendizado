#include <stdio.h>
#include <string.h>
int main() {
    // definindo as linhas e colunas
     int i,j = 0;
    printf("Quantas linhas sua matriz tera? \n ");
    scanf("%d",&i);
    printf("Quantas Colunas sua matriz tera? \n");
    scanf("%d",&j);
    // Definindo uma matriz com i linhas e j colunas
    int matriz[i][j];

    // Loop todas as linhas
    for(int x = 0; x < i;x++) {
        // Loop todas as colunas
        for(int y = 0; y < j; y ++) {
            // Definindo a coluna.
            printf("Qual valor deseja atribuir para [%d,%d]? \n",x,y);
            // Pegando o valor para a lina x e coluna y
            scanf("%d",&matriz[x][y]);
        }
    }
    // Print Da matriz
    printf("Aqui esta sua Matriz: \n");
    for(int x = 0; x < i ; x++) {
        for(int y = 0; y < j; y++) {
            printf("%d ",matriz[x][y]);
        }
        puts("\t");
    }
    return 0 ;
}