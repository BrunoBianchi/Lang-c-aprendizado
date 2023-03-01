#include <stdio.h>

int main() {
    int a,b;
    double media;
    printf("Nota 1 \n");
    scanf("%d",&a);
    printf("Nota 2 \n");
    scanf("%d",&b);
    // Transformar os ints em float e depois executar a operacao
    media =  (double) (a+b)/2;
    printf("A sua media de notas eh de %.1lf \n",media);
    if(media < 5)  printf("Aluno Reprovado");
    else printf("Aluno Aprovado");
}