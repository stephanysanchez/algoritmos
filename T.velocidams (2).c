#include <stdio.h>

int main ()
{
float V,D,T;
printf("Digite o valor de distância: \n");
scanf("%f",&D);
printf("Digite o valor do tempo: \n");
scanf("%f",&T);
V=(D*10)/(T*36);
printf("O valor da velocidade em m/s e: %f \n",V);
}