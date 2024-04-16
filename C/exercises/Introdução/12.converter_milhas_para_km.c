/* Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão é: K = 1.61 * M, sendo K a distância em quilômetros e M em milhas */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float K, M;

    // Entrada de dados
    printf("Distancia em milhas: ");
    scanf("%f", &M);

    // Processamento de dados
    K = 1.61 * M;

    // Saída de dados
    printf("Distancia em quilometros: %.2f", K);

    return 0;
}