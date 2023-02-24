#include <stdio.h>

int escolhas[] = {1,2,3,4};
char name[10];
void gui() {
  int escolhaInt =  1;
  do {
printf("Escolha umas das seguintes Opçoes: \n");
printf("1. Ajuda \n");
printf("2. Tutorialc \n");
printf("3. Pagamentos \n");
printf("4. Cadastro \n");
scanf("%d",&escolhaInt);
escolha(escolhaInt);

}while(!escolhas[escolhaInt]); 
}

void pagamentos() {
        printf("Pagamentos: \n");
        printf("Escolha a quantia que deseja pagar: \n");
        float pagamento;
        scanf("%f",&pagamento);
        printf("O Pagamento foi de: $ %2.2f",pagamento);

}
void cadastro() {
  printf("Cadastro: \n");
  printf("Digite seu primeiro nome \n");
  scanf("%s",name);
  printf("Cadastro Criado Sr(a). %s",name);

}
void tutorial() {
  printf("Tutorial");
}
void ajuda() {
   printf("Ajuda");
}
void escolha(int i) {
    switch(i) {
        case 1:
          ajuda();
        break;
        case 2:
          tutorial();
        break;
        case 3:
          pagamentos();
          
        break;
        case 4:
          cadastro();
        break;
        default: {
          printf("Favor, Escolher um Valor \n");
          gui();
        }
    }


}

int main() {
  int escolhaInt =  1;
  do {
printf("Escolha umas das seguintes Opçoes: \n");
printf("1. Ajuda \n");
printf("2. Tutorialc \n");
printf("3. Pagamentos \n");
printf("4. Cadastro \n");
scanf("%d",&escolhaInt);
escolha(escolhaInt);

}while(!escolhas[escolhaInt]); 
getchar();
return 0;

}