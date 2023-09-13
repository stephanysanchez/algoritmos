#include <stdio.h>

int main ()
{
float V,R;
printf("Digite o raio: \n");
scanf("%f",&R);
V=(1.33)*3.14*pow(R,3);
printf("O volume da esfera e aproximadamente: %f \n",V);
}