//Faça um programa que leia 10 números do usuário e informe quais deles são primos. Além disso, mostre a soma de todos os números primos existentes.
#include <stdio.h>
#define TAM 10

int main(){
  int numeros[TAM], primo[TAM], i;
  
  for(i = 0; i < TAM; i++){
    printf("Digite um número: ");
    scanf("%d", &numeros[i]);
  }
  
  for(i = 0; i < TAM; i++){
    primo[i] = numeros[i];
    if (primo[i] <= 1){
      printf("O número %d não é primo!\n", primo[i]);
    }
    if (primo[i] == 2){
      printf("O número %d é primo!\n", primo[i]);
    }else if (primo[i] == 3){
      printf("O número %d é primo!\n", primo[i]);
    }
    if (((primo[i]%2) == 0) & (primo[i] != 2)){
      printf("O número %d não é primo!\n", primo[i]);
    }else if (((primo[i]%3) == 0) & (primo[i] != 3)){
      printf("O número %d não é primo!\n", primo[i]);
    }else if(primo[i] != 1 & primo[i] != 2 & primo[i] != 3){
      printf("O número %d é primo!\n", primo[i]);
    }
  }

}