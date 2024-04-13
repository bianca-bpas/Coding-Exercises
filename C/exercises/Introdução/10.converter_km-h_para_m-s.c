/* Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s (metros por segundo). A fórmula é: M = K/3.6, sendo K a velocidade em km/h e M em m/s */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float K, M;

    // Entrada de dados - recebendo a velocidade em km/h
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &K);

    // Processamento de dados - convertendo para m/s
    M = K/3.6;

    // Saída de dados - imprimindo a velocidade em m/s
    printf("Velocidade em m/s: %.2f", M);

    return 0;
}
