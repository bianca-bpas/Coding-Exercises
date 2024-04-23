/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura) Homens: (72.7 * h) - 58; Mulheres: (62.1 * h) - 44.7 */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float altura, peso_ideal;
    int sexo;

    // Entrada de dados
    printf("Digite a sua altura: \n");
    scanf("%f", &altura);
    printf("Qual o seu sexo? \n[0] Masculino\n[1] Feminino\n");
    scanf("%d", &sexo);

    // Processamento e Saída de dados
    switch(sexo){
        case 0:
            peso_ideal = (72.7 * altura) - 58;
            printf("O seu peso ideal: %f", peso_ideal);
            break;
        case 1:
            peso_ideal = (62.1 * altura) - 44.7;
            printf("O seu peso ideal: %.2f\n", peso_ideal);
            break;
        default:
            break;
    }

    return 0;
}