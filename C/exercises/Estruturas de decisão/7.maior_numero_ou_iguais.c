/* Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensagem números iguais. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    int num1, num2;

    // Entrada de dados
    printf("Digite os numeros: \n");
    scanf("%d \n%d", &num1, &num2);

    // Processamento e Saída de dados
    if (num1 > num2){
        printf("Maior: %d", num1);
    }else if (num2 > num1){
        printf("Maior: %d", num2);
    }else{
        printf("Numeros iguais!");
    }

    return 0;
}

