/* Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de repretição for, a segunda while e a terceira do while. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    int i;

    // Processamento e Saída de dados
    for (i=1; i <= 100; i++){
        printf("%d, ", i);
    }

    printf("\n");

    i = 1;
    while (i <= 100){
        printf("%d, ", i);
        i ++;
    }

    printf("\n");

    i = 1;
    do{
        printf("%d, ", i);
        i ++;
    }while (i <= 100);

    printf("\n");

    return 0;
}
