#include <stdio.h>
/*Definindo a array com os meses*/
int array[]= {0,31,28,31,30,31,30,31,30,31,30,31,30};
/*Definindo a opcao*/
int opcao = 1;
/*Definindo o ano*/
int ano = 1;
/*Função de pegar o dia baseado no ano e no mês especificado pelo usuário*/
void pegarDia( int i,int ano) {
    /*verificando se o mês for maior que 12 ou menor que 1*/
    if(i > 12|| i < 1)  printf("Mes invalido!");
    /*vendo se o mês for igual à 2  multiplo de 4*/
    if(i == 2 && (ano % 4) == 0) {
    /*print mês bissexto */
    printf("Esse Mes possui: 29 dias (ano bissexto!)");
    /*Caso o mês seja diferente de fevereiro*/
    }else printf("Esse Mes possui: %d dias",array[i]);
}
/*Chamando a função principal*/
int main() {
    /*pegar o opção do usuário com mês e ano*/
    printf("Coloque o Mes que deseja e o Ano: ");
    scanf("%d %d",&opcao,&ano);
    /*chamar a função pegarDia*/
    pegarDia(opcao,ano);
    return 0;
}