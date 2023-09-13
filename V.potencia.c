#include <stdio.h>

int main ()
{
int B,E,P;
printf("Digite o valor da base: \n");
scanf("%d",&B);
printf("Digite o valor do expoente: \n");
scanf("%d",&E);
P=pow(B,E);
printf("O valor da potencia e: %d \n",P);
}