#include <stdio.h>

int main () 
{
float VH,QHT,PD,SB,VD,SL;
printf("Digite o valor da hora-aula: \n");
scanf("%f",&VH);

printf("Digite o valor da quantidade de horas trabalhadas: \n");
scanf("%f",&QHT);

printf("Digite o valor de percentual de desconto: \n ");
scanf("%f",&PD);
SB=VH*QHT; 

printf("O valor do salario bruto e: %f \n",SB);

VD=SB*(PD/100); 
printf("O valor de desconto e: %f \n",VD);

SL=SB-VD; 
printf("O valor do salario bruto e: %f \n",SL);
}