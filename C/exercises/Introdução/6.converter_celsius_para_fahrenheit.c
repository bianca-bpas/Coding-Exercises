/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float C, F;

    // Entrada de dados - recebendo a temperatura em graus celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    // Processamento de dados - convertendo a temperatura para fahrenheit
    F = C * (9.0/5.0) + 32.0;

    // Saída de dados - imprimindo a temperatura em fahrenheit
    printf("Temperatura em Fahrenheit: %.2f", F);

    return 0;
}
