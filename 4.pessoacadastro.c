#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char nome[51], sexo[2], sobrenome[51];
    printf("Digite o seu nome:");
    scanf("%s",&nome);
    printf("seu sobrenome:");
    scanf("%s", &sobrenome);
    printf("digite o seu sexo (M ou F):");
    scanf("%s",&sexo);

    strcat(nome, " ");
    strcat(nome, sobrenome);
    printf("\nseu nome: %s\n", nome);
   printf (" \nseu sexo: %s\n", sexo);
    
}