#include <stdio.h>
//Faça um programa que leia a idade de duas pessoas e imprima a soma das idades
int main(){
  int idade1, idade2, soma;
  printf("Digite a primeira idade: ");
  scanf("%d", &idade1);
  printf("\nDigite a segunda idade: ");
  scanf("%d", &idade2);
  soma = idade1 + idade2;
  printf("\nA soma das idades é: %d\n", soma);

  return 0;
}