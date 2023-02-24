#include <stdio.h>

int escolhas[] = {1,2,3,4};

void escolha(int i) {
    switch(i) {
        case 1:
        printf("Ajuda");
        break;
        case 2:
        printf("Tutorial");
        break;
        case 3:
        printf("Pagamentos: \n");
        printf("Escolha a quantia que deseja pagar: \n");
        float pagamento;
        scanf("%f",&pagamento);
        printf("O Pagamento foi de: $ %2.2f",pagamento);
        break;
        case 4:
        printf("Cadastro") ;
        break;
        default: printf("Favor, Escolher um Valor");
    }


}

int main() {
int escolhaInt =  1;
  do {
printf("Escolha umas das seguintes Opções: \n ");
printf("1. Ajuda \n");
printf("2. Tutorialc \n");
printf("3. Pagamentos \n");
printf("4. Cadastro \n");
scanf("%d",&escolhaInt);
escolha(escolhaInt);

}while(!escolhas[escolhaInt]); 

return 0;

}