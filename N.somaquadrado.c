#include <stdio.h>

int main ()
{
int A,B,C,D;
printf("Escreva o valor de A: \n");
scanf("%d",&A);
printf("Escreva o valor de B: \n");
scanf("%d",&B);
printf("Escreva o valor de C: \n");
scanf("%d",&C);
D=pow((A+B+C),2);
printf("O valor do quadrado da soma e: %d \n",D);
}