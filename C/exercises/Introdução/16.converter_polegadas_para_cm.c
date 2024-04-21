/* Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A fórmula de conversão é: C = P * 2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float P, C;

    // Entrada de dados
    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &P);

    // Processamento de dados
    C = P * 2.54;

    // Saída de dados
    printf("Comprimento em centimetros: %.2f", C);

    return 0;
}