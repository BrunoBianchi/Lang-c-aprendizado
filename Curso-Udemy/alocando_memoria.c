#include <stdio.h>
#include <stdlib.h>

int* alocaMemoria(int tamanho) {
    int *aux;
    aux = (int*) malloc(tamanho * sizeof(int));
    return aux;
}

int main() {
    int *vetor,tamanho;
    printf("Qual o tamanho do vetor? \n");
    scanf("%d",&tamanho);
    vetor = alocaMemoria(tamanho);
    
    for(int i = 0; i < tamanho; i++) {
        vetor[i] = i;
        printf("%d \n",vetor[i]);
    }
    free(vetor); // Limpando a memoria alocado para o vetor
}