#include <stdio.h>

int main() {
    //Declaração de Funções
   float num1, num2, resultado;
   char operador;

   printf("Digite dois números: ");
   scanf("%f %f", &num1, &num2);

   printf("Digite o operador (+, -, *, /): ");
   scanf(" %c", &operador);

   switch (operador) {
      case '+': //Implementação da função de adição
         resultado = num1 + num2;
         break;
      case '-': //Implementação da função de subtração
         resultado = num1 - num2;
         break;
      case '*': //Implementação da função de multiplicação
         resultado = num1 * num2;
         break;
      case '/': //Implementação da função de divisão
         if (num2 == 0) {
            printf("Erro: divisão por zero");
            return 1; // Encerra o programa com código de erro 1
         } else {
            resultado = num1 / num2;
         }
         break;
      default:
         printf("Operador inválido");
         return 1; // Encerra o programa com código de erro 1
   }

   printf("O resultado é: %.2f", resultado);
   return 0;
}
