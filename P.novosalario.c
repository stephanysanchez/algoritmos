#include<stdio.h>

int main()
{
 float SM,PR,NS;
 printf("Digite o valor do salario mensal: \n");
 scanf("%f",&SM);
 printf("Digite o valor do percentual de reajuste: \n");
 scanf("%f",&PR);
NS=SM*(1+PR/100);
 printf("O valor do novo salario e: %f \n",NS);
 }