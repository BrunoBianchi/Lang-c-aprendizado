#include <stdio.h>
#include <math.h>

int main() {
    int n,idade, somaIdades =  0;
    double media = 0;
    printf("Quantas Pessaos farao parte da media? \n");
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        printf("Idade da pessoa (%d)\n ",i);
        scanf("%d",&idade);
        somaIdades += idade;
    }
    media = (double) (somaIdades) / n;
    printf("A media das idades eh de:\n %.1lf",media);
}