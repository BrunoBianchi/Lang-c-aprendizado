#include <stdio.h>
#include <string.h>
char name[50];
char name2[50];
char name3[50];
int main() {
    // ADICIONAR UM VALORA  UMA STRING:

    // 1. strcpy(name,"Bruno Bianchi"); -> Adicionar um valor para a matriz de caracteres
    // 2. scanf("%s",&name2); -> Esperar por um input 
    // 3. fgets(name3,50,stdin); -> Mesma coisa que o scanf

    // CONDICAO:

    if(0) printf("Valor retorna False! \n"); // 0 sempre retorna false!
    if(1) printf("Valor retorna True! \n"); // Valor Diferente de 0 sempre retorna true!
    /*
    
    if(menino) {
        se for menino, roda o codigo aqui dentro;

    }else if(menina) {
        se for menina,roda este codigo;

    }else {
        se nao for nem menino nem menina, entao roda essa codigo;
    }
    */


    // DECLARACAO DE VARIAVEIS COM IF / ELSE:
    /*

    1.
    int a,c = 0;
    a = 20;
    int b = a>10?a:c;

    2.
    Em Outras Palavras:

    if(a> 10) {
    b = a;
    } else b = c;

    printf("%d",b);
    
    */


//  WHILE E FOR:

/*

int x = 0;
while(x>0) { // Looping Infinito!;
 printf("%d",x);

}

do{ // Looping finito
x++;
s
}while(x<10); // Condicao

for(int x = 0; x< 10; x++) {
printf("%d \n",x);
}

int x = 0;
do{
    printf("digite um valor maior que 10! \n");
    scanf("%d",&x);
}while(x >0);
*/


}