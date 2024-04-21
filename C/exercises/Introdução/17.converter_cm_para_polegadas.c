/* Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float C, P;

    // Entrada de dados
    printf("Digite o comprimento em centimetros: ");
    scanf("%f", &C);

    // Processamento de dados
    P = C/2.54;

    // Saída de dados
    printf("O comprimento em polegadas: %.2f", P);

    return 0;
}