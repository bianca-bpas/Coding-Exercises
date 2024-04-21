/* Leia um valor de volume em metros cúbicos m³ e epresente-o convertido em litros. A fórmula de conversão é: L = 1000 * M, sendo L o volume em litros e M o volume em metros cúbicos. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    int M, L;

    // Entrada de dados
    printf("Digite o volume em metros cubicos: ");
    scanf("%d", &M);

    // Processamento de dados
    L = 1000 * M;

    // Saída de dados
    printf("Volume em litros: %d", L);

    return 0;
}
