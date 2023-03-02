#include <stdio.h>
#include <string.h>

int main() {
char palavra[255];
scanf("%s",palavra);
// Limpa as casas nao utilizadas
palavra[strlen(palavra) + 1] ='\0';
printf("%s",palavra);
return 0 ;
}