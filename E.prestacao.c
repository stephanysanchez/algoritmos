#include <stdio.h>

int main () 
{
float P,V,T,TP;
printf("Digite o valor da divida: \n");
scanf("%f",&V);
printf("Digite o valor da taxa percentual: \n");
scanf("%f",&TP);
printf("Digite o tempo da divida: \n");
scanf("%f",&T);
P=V+(V*(TP/100))*T; 
printf("O valor da prestacao e: %f \n",P);
}