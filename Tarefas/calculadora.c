#include <stdio.h>
#include <math.h>
void soma(int a,int b) {
    printf("Segundo Valor \n");
    scanf("%d",&b);
    printf("Resultado: %d",a+b);
}
void elevar(int a, int b) {
    printf("Segundo Valor \n");
    scanf("%d",&b);
    printf("Resultado: %f",(double) pow(a,b));
}
void multiplicacao(int a, int b) {
    printf("Segundo Valor \n");
    scanf("%d",&b);
    printf("Resultado: %d",a*b);
}
void divisao(float a, float b) {
    printf("Segundo Valor \n");
    scanf("%f",&b);
    printf("Resultado: %.3f",(a/b));
}
void menos(int a , int b) {
    printf("Segundo Valor \n");
    scanf("%d",&b);
    printf("Resultado: %d",a-b);
}
int main(){
    int a,b;
    char operador;
    printf("Primeiro Valor \n");
    scanf("%d",&a);

    getchar(); //Limpando O buffer

    do{ 
    printf("Qual Operacao deseja ? \n");
    scanf("%c",&operador);

        switch(operador) {
        case '+' :
        soma(a,b);
        break;
        case '-':
        menos(a,b);
        break;
        case '*' :
        multiplicacao(a,b);
        break;
        case '/' :
        divisao(a,b);
        break;
        case '^' :
        elevar(a,b);
        break;
        default: printf("Operador Invalido, utilize \n 1. + para soma \n 2. - para menos \n 3. / para divisao \n 4. * para multiplicacao \n 5. ^ para elevar \n");
    }
    }while(operador != '+' && operador != '-' && operador != '*' && operador != '/' && operador != '^');

}