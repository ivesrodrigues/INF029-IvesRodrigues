#include <stdio.h>
//Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas
int main(){
  int valor1, valor2, aux;
  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);
  printf("\nDigite o segundo valor: ");
  scanf("%d", &valor2);
  printf("\nOs valores digitados foram: %d e %d\n", valor1, valor2);
  aux = valor1;
  valor1 = valor2;
  valor2 = aux;
  printf("\nOs valores invertidos são: %d e %d\n", valor1, valor2);

  return 0;
}

