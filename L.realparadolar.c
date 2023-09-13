#include <stdio.h>

int main ()
{
float QTR,CD,VD;
printf("Digite a quantidade de reais disponiveis: \n");
scanf("%f",&QTR);
printf("Digite a cotacao do dolar: \n");
scanf("%f",&CD);
VD=QTR/CD;
printf("A quantidade de dolares e: %f \n",VD);
}
