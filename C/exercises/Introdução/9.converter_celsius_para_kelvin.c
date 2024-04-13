/* Leia uma temperatura em graus Celsius e apresente-a convertida em Kelvin. A fórmula de conversão é: K = C+273.15, sendo K a temperatura em Kelvin e C a temperatura em Celsius */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float C, K;

    // Entrada de dados - recebendo a entrada em celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    // Processamento de dados - convertendo para kelvin
    K = C+273.15;

    // Saída de dados - imprimindo a temperatura em kelvin
    printf("Temperatura em Kelvin: %.2f", K);

    return 0;
}
