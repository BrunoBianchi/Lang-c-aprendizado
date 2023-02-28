#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char ajuda[100] = {"Seu numero %d e\' par "}; 

int escolha() {
    int number = 0;
    printf("Escolha 1 numero \n");
    scanf("%d",&number);
    printf("\033[2J\033[H");
    return number;
}

int main() {
    int number = escolha();

    int resposta = 0;
    int tries = 0;
    printf("Chute um numero! \n");
    do{
    scanf("%d",&resposta); 
        printf("\033[2J\033[H");
        tries++;
        if(tries >=5) {
            if((number % 2)  == 0 ) {
                printf("\033[2J\033[H");
                printf("Seu numero e\' par \n");
            }else {
             printf("\033[2J\033[H");
             printf("seu numero e\' Impar \n");

            } 
        }
        if(resposta < number) {
            printf("\033[2J\033[H");
            printf("\nO numero e\' maior. Tente Novamente! \n");
        }else if(resposta > number) {
            printf("\033[2J\033[H");
            printf("\nO numero e\' menor. Tente Novamente \n");
        }else printf("Parabens, voce acertou %d em %d tentativas! \n",number,tries);
    }while(resposta != number);


}