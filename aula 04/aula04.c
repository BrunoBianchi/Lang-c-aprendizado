#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Escolher o numero
int escolha() {
    int number = 0;
    printf("Escolha 1 numero \n");
    scanf("%d",&number);
    printf("\033[2J\033[H");
    //retornar o numero escolhido 
    return number;
}
// Versao Single Player do jogo
void Random() {
    //Pegando um numero aleatorio
    int number = rand() % 101;
    int resposta = 0;
    int tries = 0;

    printf("Chute um numero! \n");
    //Printar user escolher um numero enquanto o numero escolhido for diferente do numero aleatorio
    do{
        //Obter a resposta do usuario
        scanf("%d",&resposta); 
        printf("\033[2J\033[H");
        //Aumentar o numero de tentativas
        tries++;
        if(tries >=5) {
            //verificar se o numero par
            if((number % 2)  == 0 ) {
                printf("\033[2J\033[H");
                printf("Seu numero e\' par \n");
            //Caso O numero seja Impar
            }else {
             printf("\033[2J\033[H");
             printf("seu numero e\' Impar \n");

            } 
        }
        if(resposta < number) {
            printf("\nO numero e\' maior. Tente Novamente! \n");
        }else if(resposta > number) {
            printf("\nO numero e\' menor. Tente Novamente \n");
        }else printf("Parabens, voce acertou %d em %d tentativas! \n",number,tries);
    //Enquanto a resposta for diferente do numero
    }while(resposta != number);

}
//modo Multiplayer 
void Escolha() {
    int number = escolha();
    int resposta = 0;
    int tries = 0;
    printf("Chute um numero! \n");
    do{
    scanf("%d",&resposta); 
        printf("\033[2J\033[H");
        tries++;
        if((tries % 5) == 0) {
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
//Funcao para escolher O tipo de modo de jogo
void tipo_de_jogo(int escolha){
    switch(escolha) {
        case 1 :
        Random();
        break;
        case 2:
        Escolha();
        break;
    }
}


// Funcao principal
int main() {
    printf("Escolha o modo de jogo: \n 1. Single Player \n 2. Multi  Player \n");
    int escolha = 0;
    scanf("%d",&escolha);
    tipo_de_jogo(escolha);
}