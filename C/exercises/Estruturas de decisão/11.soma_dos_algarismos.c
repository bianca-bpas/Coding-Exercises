/* Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma de todos os seus algorismos. Por exemplo, ao número 251 corresponderá o valor 8 (2+5+1). Se o número lido não for maior do que zero, o programa terminará com a mensagem Número inválido. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    int numero, soma=0, i;

    // Entrada de dados
    printf("Digite um numero: \n");
    scanf("%d", &numero);

    // Processamento de dados 
    if (numero > 0){
        while (numero > 0){
            i = numero%10;
            soma = soma + i;
            numero = numero/10;
        }
        printf("Soma: %d\n", soma);
    }else{
        printf("Numero invalido.\n");
    }

    return 0;
}