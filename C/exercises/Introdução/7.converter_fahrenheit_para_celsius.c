/* Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = 5.0 * (F-32.0)/9.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float F, C;

    // Entrada de dados - recebendo a temperatura em fahrenheit
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);

    // Processamento de dados - convertendo para celsius
    C = 5.0 * (F-32.0)/9.0;

    // Saída de dados - imprimindo a temperatura em celsius
    printf("Temperatura em Celsius: %.2f", C);

    return 0;
}
