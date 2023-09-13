#include <stdio.h>

int main () 
{
int A,B,C; 
printf("Escreva o valor de A: \n");
scanf("%d",&A);
printf("Escreva o valor de B: \n");
scanf("%d",&B);
C=A;
A=B;
B=C;
printf("O valor de A e: %d \n",A);
printf("O valor de B e: %d \n",B);
}