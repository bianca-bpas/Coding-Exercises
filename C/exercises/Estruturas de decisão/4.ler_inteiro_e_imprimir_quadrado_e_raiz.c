/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o número digitado ao quadrado e a raiz quadrada dele */

#include <stdio.h>
#include <math.h>

int main(){
    // Declaração de variáveis
    int numero, quadrado, raiz;

    // Entrada de dados
    printf("Digite o numero: ");
    scanf("%d", &numero);

    // Processamento de dados
    if (numero > 0){
        quadrado = numero * numero;
        raiz = sqrt(numero);
        printf("Quadrado: %d\nRaiz: %d\n", quadrado, raiz);
    }

    return 0;
}