/* Leia uma temperatura em Kelvin e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = K-273.15, sendo K a temperatura em Kelvin e C a temperatura em Celsius */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float K, C;

    // Entrada de dados - recebendo a temperatura em kelvin
    printf("Digite a temperatra em Kelvin: ");
    scanf("%f", &K);

    // Processamento de dados - convertendo para celsius
    C = K-273.15;

    // Saída de dados - imprimindo a temperatura em celsius
    printf("Temperatura em Celsius: %.2f", C);

    return 0;
}