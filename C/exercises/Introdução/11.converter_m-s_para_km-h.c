/* Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilômetros por hora). A fórmula de conversão é: K = M *3.6, sendo K a velocidade em km/h e M em m/s */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float K, M;

    // Entrada de dados - recebendo a velocidade em m/s
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &M);

    // Processamento de dados - convertendo a velocidade para km/h
    K = M * 3.6;

    // Saída de dados - imprimindo a velociade em km/h
    printf("Velocidade em km/h: %.2f", K);

    return 0;
}