/* Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    int numero=3, contador, multiplo;

    // Processamento e Saída de dados
    for (contador=1; contador <= 5; contador++){
        multiplo = numero*contador;
        printf("%d\n", multiplo);
    }

    return 0;
}