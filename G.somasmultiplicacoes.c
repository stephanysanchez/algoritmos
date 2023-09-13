#include <stdio.h>

int main () 
{
int A,B,C,D,SAB,PAB,SAC,PAC,SAD,PAD,SBC,PBC,SBD,PBD,SCD,PCD; 
printf("Escreva o valor de A: \n");
scanf("%d",&A);
printf("Escreva o valor de B: \n");
scanf("%d",&B);
printf("Escreva o valor de C: \n");
scanf("%d",&C);
printf("Escreva o valor de D: \n");
scanf("%d",&D);
SAB=A+B;
PAB=A*B;
SAC=A+C;
PAC=A*C;
SAD=A+D;
PAD=A*D;
SBC=B+C;
PBC=B*C;
SBD=B+D;
PBD=B*D;
SCD=C+D;
PCD=C*D;
printf("O valor de SAB e: %d \n",SAB);
printf("O valor de PAD e: %d \n",PAD);
printf("O valor de SAC e: %d \n",SAC);
printf("O valor de PAC e: %d \n",PAC);
printf("O valor de SAD e: %d \n",SAD);
printf("O valor de PAD e: %d \n",PAD);
printf("O valor de SBC e: %d \n",SBC);
printf("O valor de PBC e: %d \n",PBC);
printf("O valor de SBD e: %d \n",SBD);
printf("O valor de PBD e: %d \n",PBD);
printf("O valor de SCD e: %d \n",SCD);
printf("O valor de PCD e: %d \n",PCD);
}