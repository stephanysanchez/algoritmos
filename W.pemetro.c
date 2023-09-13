#include <stdio.h>

int main ()
{
float P,M,Cm;
printf("Digite o valor em pes: \n");
scanf("%f",&P);
M=P*0.3048;
Cm=M*100;
printf("O valor do pe em centimetros: %f \n",Cm);
printf("O valor do pe em metros: %f \n",M);
}