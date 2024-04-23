/* Leia um valor de compriemtno em metros e apresente-o convertido em jardas. A fórmula de conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros. */

#include <stdio.h>

int main(){
    // Declarção de variáveis
    float J, M;

    // Entrada de dados
    printf("Digite o comprimento em metros: ");
    scanf("%f", &M);

    // Processamento de dados
    J = M/0.91;

    // Saída de dados
    printf("Comprimento em jardas: %.2f\n", J);

    return 0;
}
