/* Faça um programa que leia um número real e o imprima */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float numero;

    // Entrada de dados
    printf("Digite um numero real: ");
    scanf("%f", &numero);

    // Saída de dados
    printf("Voce digitou o numro %f", numero);

    return 0;
}