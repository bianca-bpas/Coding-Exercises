/* Leia uma distânica em quilômetros e apresente-a convertida em milhas. A fórmula de conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float K, M;

    // Entrada de dados 
    printf("Distancia em km: ");
    scanf("%f", &K);

    // Processamento de dados
    M = K/1.61;

    // Saída de dados
    printf("Distancia em milhas: %.2f", M);

    return 0;
}