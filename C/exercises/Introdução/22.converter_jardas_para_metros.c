/* Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de conversão é: M = 0.91 * J, sendo J o comprimento em jardas e M o comprimento em metros. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float M, J;

    // Entrada de dados
    printf("Digite o comprimento em jardas: ");
    scanf("%f", &J);

    // Processamento de daods
    M = 0.91 * J;

    // Saída de dados
    printf("Comprimento em metros: %.2f\n", M);

    return 0;
}

