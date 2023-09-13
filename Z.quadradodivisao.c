#include<stdio.h>

int main()
{
    float DIVISOR, DIVIDENDO;
    float QUOCIENTE, POTENCIA;
    printf("Digite um valor para o Dividendo: \n");
    scanf("%f",&DIVIDENDO);
    printf("Digite um valor para o divisor: \n");
    scanf("%f",&DIVISOR);
    QUOCIENTE = DIVIDENDO / DIVISOR;
    printf("Quociente: %f \n",QUOCIENTE);
    POTENCIA = pow(QUOCIENTE,2);
    printf("Potencia: %f \n",POTENCIA);
}