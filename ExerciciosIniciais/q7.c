//Faça um programa que verifique se um número é primo
#include <stdio.h>

int main(){
  int primo, div;
  printf("Digite um número:");
  scanf("%d", &primo);
  if (primo <= 1){
    printf("Esse número não é primo!");
    return 0;
  }else if (primo == 2 || primo == 3){
    printf("Esse número é primo!\n");
    return 0;
  }
  if (primo%2 == 0 || primo%3 == 0){
    printf("Esse número não é primo!\n");
  }else{
    printf("Esse número é primo!\n");
  }
     
}


