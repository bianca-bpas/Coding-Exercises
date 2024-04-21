/* Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³. A fórmula de conversão é: M = L/1000, sendo L o volume em litros e M o volume em metros cúbicos. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    int M, L;

    // Entrada de dados
    printf("Digite o volume em litros: ");
    scanf("%d", &L);

    // Processamento de dados
    M = L/1000;

    // Saída de dados
    printf("Volume em metros cubicos: %d", M);

    return 0;
}
