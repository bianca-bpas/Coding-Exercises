#include <stdio.h>

int main(){
    // Declaração das variáveis
    int numero1;
    int numero2;
    int maior;

    // Entrada de dados - recebendo os dois números
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    // Processamento de dados - verificando qual o maior número
    if (numero1 > numero2){
        maior = numero1;
    }else if (numero2 > numero1){
        maior = numero2;
    }else{
        maior = -1;
    }

    // Saída de dados - imprimindo o maior número
    if (maior != -1){
        printf("Maior: %d", maior);
    }else{
        printf("Os numeros sao iguais!");
    }

    return 0;
}
