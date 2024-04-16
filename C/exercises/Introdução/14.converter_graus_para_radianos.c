/* Leia um ângulo em graus e apresente-o em radianos. A fórmula de conversão é: R = G * pi/180, sendo G o ângulo em graus e R em radianos e pi = 3.14 */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float R, G, pi=3.14;

    // Entrada de dados
    printf("Angulo em graus: ");
    scanf("%f", &G);

    // Processamento de dados
    R = G*pi/180;

    // Saída de dados
    printf("Angulo em radianos: %.2f", R);

    return 0;
}