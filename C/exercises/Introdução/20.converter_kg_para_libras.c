/* Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float K, L;

    // Entrada de dados
    printf("Digite a massa em kg: ");
    scanf("%f", &K);

    // Processamento de dados
    L = K/0.45;

    // Saída de dados
    printf("Massa em libras: %.2f", L);

    return 0;
}

