/* Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado */

#include <stdio.h>
#include <math.h>

int main(){
    // Declaração de variáveis
    float numero, resultado;

    // Entrada de dados
    printf("Digite um numero real: ");
    scanf("%f", &numero);

    // Processamento de dados
    if (numero > 0){
        resultado = sqrt(numero);
    }else{
        resultado = pow(numero, 2);
    }

    printf("Resultado: %.2f", resultado);

    return 0;
}