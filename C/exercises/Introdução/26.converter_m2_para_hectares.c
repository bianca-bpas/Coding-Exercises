/* Leia um valor de área em metros quadrados m² e apresente-o convertido em hectares. A fórmula de conversão é: H = M * 0.0001, sendo M a área em metros quadrados e H a área em hectares. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float M, H;

    // Entrada de dados
    printf("Digite o valor da area em metros quadrados: \n");
    scanf("%f", &M);

    // Processamento de dados
    H = M * 0.0001;

    // Saída de dados
    printf("Area em hectares: %.2f\n", H);

    return 0;
}