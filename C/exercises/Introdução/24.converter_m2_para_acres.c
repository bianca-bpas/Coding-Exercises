/* Leia um valor de área em metros quadrados m² e apresente-o convertido em acres. A fórmula de conversão é: A = M * 0.000247, sendo M a área em metros quadrados e A a área em acres. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float A, M;

    // Entrada de dados
    printf("Digite o valor da area em metros quadrados: \n");
    scanf("%f", &M);

    // Processamento de dados
    A = M * 0.000247;

    // Saída de dados
    printf("\nArea em acres: %.2f\n", A);

    return 0;
}