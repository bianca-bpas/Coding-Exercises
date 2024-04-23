/* Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário, imprima: Empréstimo não concedido, caso contrário, imprima: Empréstimo concedido */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float salario, prestacao;

    // Entrada de dados
    printf("Digite o salario e o valor da prestacao do emprestimo:\n");
    scanf("%f  %f", &salario, &prestacao);

    // Processamento e Saída de dados
    if (prestacao > 0.2*salario){
        printf("Emprestimo nao concedido.\n");
    }else{
        printf("Emprestimo concedido.\n");
    }

    return 0;
}
