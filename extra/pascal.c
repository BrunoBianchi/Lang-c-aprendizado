#include <stdio.h>
int main() {
    int j,linhas,valor = 0;
    printf("Mande-me a quantidade de linhas que deseja:");
    scanf("%d",&linhas);
    for(int i = 0 ; i < linhas ; i++) {
        printf("1 \n");
        if(i == j) {
            printf("%d \n  ",i+j);
            printf(" ");
        }else {
            printf("%d \n ",i+j);
        }
        j= j + 1;
        printf("1 \n");
    }
    
    return 1;
}