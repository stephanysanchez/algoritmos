#include <stdio.h>

int main () 
{
float A,R,V;
printf("Digite o valor do raio: \n");
scanf("%f",&R);
printf("Digite o valor da altura: \n");
scanf("%f",&A);
V=3.14*(R*R)*A;
printf("O valor do volume da lata de oleo e: %f \n",V);
}