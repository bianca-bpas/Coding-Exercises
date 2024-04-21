/* Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é: G = R * 180 / pi, sendo G o ângulo em graus e R em radianos e pi = 3.14 */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float G, R, pi=3.14;

    // Entrada de dados
    printf("Digite o angulo em radianos: ");
    scanf("%f", &R);

    // Processamento de dados
    G = R * 180 / pi;

    // Saída de dados
    printf("O angulo em graus: %.2f", G);

    return 0;
}