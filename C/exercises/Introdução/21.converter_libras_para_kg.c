/* Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de conversão é: K = L * 0.45, sendo K a massa em quilogramas e L a massa em libras. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float K, L;

    // Entrada de dados
    printf("Digite o valor da massa em libras: ");
    scanf("%f", &L);

    // Processamento de dados
    K = L * 0.45;

    // Saída de dads
    printf("Massa em quilogramas: %.2f\n", K);

    return 0;
}
