#include <stdio.h>
#include  <math.h>
int main() {
    int a,b,c,d = 0;
    double x1,x2 = 0;
    printf("Digite o valor de A , B e C : \n");
    scanf("%d %d %d",&a,&b,&c);
    d = (pow(b,2) - (4*a*c));
    if(d < 0) printf("Essa Equacao nao possui raizes reais! \n");
    else  {
    x1 = (double)(-b + sqrt(d) ) /2 * a ;
    x2 = (double)(-b - sqrt(d)) /2 *a ;
    printf("As reaizes da equacao sao: \n [%.4lf,%.4lf]",x1,x2);
    }
}