/* Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número, Se o número for negativo, mostre uma mensagem dizendo que o número é inválido */

#include <stdio.h>
#include <math.h>

int main(){
    // Declaração de variáveis
    float numero, raiz;

    // Entrada de dados 
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Processamento e Saída de dados
    if (numero > 0){
        raiz = sqrt(numero);
        printf("Raiz: %.2f", raiz);
    }else if (numero < 0){
        printf("O numero digitado é invalido!");
    }
    
    return 0;
}