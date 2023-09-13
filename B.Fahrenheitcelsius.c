#include <stdio.h>

int main () 
{
float C,F; 
printf("Digite o valor da temperatura em Fahrenheit: \n");
scanf("%f",&F);
C=(F-32)*5/9;
printf("O valor da temperatura em Celsius e: %f \n",C);
}