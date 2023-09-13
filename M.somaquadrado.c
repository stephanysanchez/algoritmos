#include <stdio.h>

int main ()
{
int A,B,C,D;
printf("Digite o valor de A: \n");
scanf("%d",&A);
printf("Digite o valor de B: \n");
scanf("%d",&B);
printf("Digite o valor de C: \n");
scanf("%d",&C);
D=pow(C,2)+pow(B,2)+pow(A,2);
printf("O resultado da soma dos quadrados de A,B,C e: %d \n",A,B,C);
}