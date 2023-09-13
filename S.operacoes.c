#include <stdio.h>

int main ()
{
float A,B,D,S,DV,DV2,P; 
printf("Digite o valor de A: \n");
scanf("%f",&A);
printf("Digite o valor de B: \n");
scanf("%f",&B);
S=A+B;
D=A-B;
P=A*B;
DV=A/B;
DV2=B/A;
printf("O valor da soma e: %f \n",S);
printf("O valor da subtração e: %f \n",D);
printf("O valor da multiplicação e: %f \n",P);
printf("O valor da divisao 1 e: %f \n",DV);
printf("O valor da divisao 2 e: %f \n",DV2);
}