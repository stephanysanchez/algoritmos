#include<stdio.h>

void main ()
{
    float R,A;
    printf("Escreva o raio\n");
    scanf("%f",&R);
    A = 3.14 * (R * R);
    if (R<0)
    printf("Resultado inválido");
    if (R>0)
    printf("Area:%.2f \n", A);
}
