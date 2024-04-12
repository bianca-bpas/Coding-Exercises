/* Leia um número real e imprima o resultado do quadrado desse número */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float numero;
    float quadrado;

    // Entrada de dados - recebendo o número
    printf("Digite o numero: ");
    scanf("%f", &numero);

    // Processamento de dados - calculando o quadrado no número
    quadrado = numero * numero;

    // Saída de dados - imprimindo o valor do quadrado
    printf("Quadrado: %f", quadrado);

    return 0;
}