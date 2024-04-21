/* Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    int numero;

    // Entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Processamento e Saída de dados
    if (numero % 2 == 0){
        printf("%d -> PAR", numero);
    }else{
        printf("%d -> IMPAR", numero);
    }

    return 0;
}