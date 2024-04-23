/* Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuario e o programa termina. */

#include <stdio.h>

int main(){
    // Declaração de variáveis
    float N1, N2, media;

   // Entrada de dados
   printf("Digite as notas abaixo: \n");
   scanf("%f \n%f", &N1, &N2);

   // Processamento de dados
   if (N1 >= 0.0 && N1 <= 10.0 && N2 >= 0.0 && N2 <= 10.0){
      media = (N1+N2)/2;
      printf("A media desse estudante foi: %.2f\n", media);
   }else{
      printf("Uma das notas informadas nao e valida!\n");
   }

   return 0;
}
