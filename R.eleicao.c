#include<stdio.h>

int main()
{
    int A, B, C, N, BR;
    float PVV, PA, PB, PC, PN, PBR, Total;
    printf("Digite o numero de eleitores do candidato A: \n");
    scanf("%d",&A);
    printf("Digite o numero de eleitores do candidato B: \n");
    scanf("%d",&B);
    printf("Digite o numero de eleitores do candidato C: \n");
    scanf("%d",&C);
    printf("Digite o valor de votos Nulos: \n");
    scanf("%d",&N);
    printf("Digite o valor de votos Brancos: \n");
    scanf("%d",&BR);
    Total = A + B + C + N + BR;
    printf("Total de votos: %f \n",Total);
    PVV = ((A + B + C) / Total) * 100;
    printf("Percentual dos votos validos: %f \n",PVV);
    PA = (A / Total) * 100;
    printf("Percental dos votos validos do candidato A: %f \n",PA);
    PB = (B / Total) * 100;
    printf("Percentual de votos validos do candidato B: %f \n",PB);
    PC = (C / Total) * 100;
    printf("Percentual de votos validos do candidato C: %f \n",PC);
    PBR  = (BR / Total ) * 100;
    printf("percentual de votos em branco: %f \n",PBR);
    PN = (N / Total) * 100;
    printf("percentual de votos nulos: %f \n",PN); 
}