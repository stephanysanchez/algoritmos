#include <stdio.h>

int main ()
{
float CD,QD,VR;
printf("Digite o valor da cotacao atual do dolar: \n");
scanf("%f",&CD);
printf("Digite a quantidade de dolares disponiveis: \n");
scanf("%f",&QD);
VR=CD*QD;
printf("A quantidade do valor em reais e: %f \n",VR);
}