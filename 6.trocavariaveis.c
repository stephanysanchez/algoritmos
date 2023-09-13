#include<stdio.h>

int main()
{
int A,B,C,D,E;
printf("Digite o valor de A: \n");
scanf("%d",&A);
printf("Digite o valor de B: \n");
scanf("%d",&B);
printf("Digite o valor de C: \n");
scanf("%d",&C);
printf("Digite o valor de D: \n");
scanf("%d",&D);
E=A;
A=D;
D=E;
E=C;
C=B;
B=E;
printf("O valor de A e: %d \n",A);
printf("O valor de B e: %d \n",B);
printf("O valor de C e: %d \n",C);
printf("O valor de D e: %d \n",D);
}