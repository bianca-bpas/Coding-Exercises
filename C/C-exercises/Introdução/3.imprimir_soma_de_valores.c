/* Peça ao usuário para digitar três valores inteiros e imprima a soma deles */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    int numero1;
    int numero2;
    int numero3;
    int soma;

    // Entrada de dados - recebendo os números
    printf("Digite o primero numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    // Processamento de dados - calculando a soma entre os valores
    soma = numero1 + numero2 + numero3;

    // Saída de dados - imprimindo o valor da soma
    printf("Soma: %d", soma);

    return 0;
}