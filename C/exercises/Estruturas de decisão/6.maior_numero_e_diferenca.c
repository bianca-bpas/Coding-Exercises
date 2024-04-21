/* Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    int num1, num2, maior, dif;

    // Entrada de dados
    printf("Digite os numeros: \n");
    scanf("%d \n%d", &num1, &num2);

    // Processamento de dados
    if(num1 > num2){
        maior = num1;
        dif = num1 - num2;
    }else if (num2 > num1){
        maior = num2;
        dif = num2 - num1;
    }

    // Saída de dados
    printf("Maior: %d\nDiferenca: %d", maior, dif);

    return 0;
}

