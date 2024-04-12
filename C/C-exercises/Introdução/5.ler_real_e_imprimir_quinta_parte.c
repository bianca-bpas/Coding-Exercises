/* Leia um número real e imprima a quinta parte deste número */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float numero;
    float resultado;

    // Entrada de dados - recebendo o número
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Processamento de dados - calcular a quinta parte do número
    resultado = numero/5;
    
    // Saída de dados - imprimindo o resultado
    printf("Quinta parte: %f", resultado);
    
    return 0;
}