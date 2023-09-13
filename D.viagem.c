#include <stdio.h>

int main () 
{
float T,V,D,L;
printf("Digite o valor do tempo: \n");
scanf("%f",&T);
printf("Escreva o valor da velocidade: \n");
scanf("%f",&V);
D=V*T; 
L=D/12; 
printf("O tempo foi: %f \n",T);
printf("A velocidade foi: %f \n",V);
printf("A distância foi: %f \n",D);
printf("A quantidade de litros usados foi: %f \n", L);
}