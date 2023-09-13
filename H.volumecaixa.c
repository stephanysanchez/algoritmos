#include <stdio.h>

int main ()
{
float V,C,A,L;
printf("Digite o valor do comprimento: \n");
scanf("%f",&C);
printf("Digite o valor da largura: \n");
scanf("%f",&L);
printf("Digite o valor da altura: \n");
scanf("%f",&A);
V=C*L*A;
printf("O valor do volume e: %f \n",V);
}