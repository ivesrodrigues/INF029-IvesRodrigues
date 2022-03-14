//Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou menor
#include <stdio.h>

int main(){
  int idade;
  printf("Digite sua idade:");
  scanf("%d", &idade);
  if (idade > 18){
    printf("Você é maior de idade!");
  }else{
    printf("Você é menor de idade!");
  }
}