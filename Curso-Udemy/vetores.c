#include <stdio.h>
#include <string.h>

int i = 0;
 int numbers[];
void display(int n) {
    for(int z = 0 ; z <  n ; z++) {
        printf("%d \t",numbers[z]);
    }
}

int main() {
    int N;
    printf("Quantos numeros deseja Adicionar ao vetor? \n");
    scanf("%d",&N);
    for(i = 0 ; i < N; i++) {
        printf("Adicione o (%d) numero do vetor \n",i);
        scanf("%d",&numbers[i]);
    }
    printf("Seu vetor possui (%d) numeros \n" ,N);
    printf("Deseja Ver todos os valores? \n1. Sim \n2. Nao \n ");
    int resposta = 0;
    scanf("%d",&resposta);

    switch(resposta) {
        case 1:
        display(N);
        break;
        case 2:
        return 0;
        break;
        default:
         printf("1. Sim \n 2. Nao \n");
        break;
    }
}