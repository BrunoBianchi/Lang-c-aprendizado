/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   /*Definindo Valor Máximo*/
  int maxValue= 0 ;
     /*Definindo Valor Mínimo*/
  int minValue = 0;
     /*Definindo Valor Meio*/
  int meio = 0;
     /*Definindo Array Contentendo 3 valores para os quais serão definidos o max, min e meio*/
  int array[] = {0,0,0};
     /*Printando para pegar 3 valores*/
  printf("Por favor, entre com 3 valores: \n");
     /*Definindo Os valores da array com os 3 valores dados */
  scanf("%d %d %d",&array[0],&array[1],&array[2]);
     /*Fazendo um loop em que o valor de i precisa ser menor que o tamanho da array*/
  for(int i = 0; i<(sizeof(array)/sizeof(array[0])); i++) {
       /*Verificando se o valor da array[i] é maior que todos os outros valores*/
      if(array[i] >= array[0] && array[i] >= array[1] && array[i] >= array[2]) {
           /*Definindo Valor Máximo*/
         maxValue = array[i];
         /*Verificando se o valor da array[i] é menor que todos os outros valores*/
      } else if(array[i] <= array[0] && array[i] <= array[1] && array[i] <= array[2]) {
        /*Definindo Valor Mínimo*/
          minValue = array[i];
          /*Caso o valor da array[i] não ser nem maior ou menor,então será o valor do meio*/
      } else {
        /*Definindo Valor Meio*/
         meio = array[i];
      }
  }
   /*Print dos valores*/
    printf(" Maior Valor %d: \n Menor valor: %d \n Meio: %d ",maxValue,minValue,meio);

    return 0;
    
    
  
}
