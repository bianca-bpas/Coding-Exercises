/* Leia um valor de área em acres e apresente-o convertido em metros quadrados m². A fórmula de conversão é: M = A * 4048.58, sendo M a área em metros quadrados e A a área em acres. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float A, M;

    // Entrada de dados
    printf("Digite o valor da area em acres: \n");
    scanf("%f", &A);

    // Processamento de dados
    M = A * 4048.58;

    // Saída de dados
    printf("\nArea em metros quadrados: %.2f\n", M);

    return 0;
}