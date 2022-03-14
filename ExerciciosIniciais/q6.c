//Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou de menor. O programa deve repetir essa ação até que uma idade negativa seja informada
#include <stdio.h>

int main(){
  int idade;
  
  for (int i=0; idade>=0; i++){
    printf("Digite sua idade:");
    scanf("%d", &idade);
    if (idade >= 18){
      printf("Você é maior de idade!\n");
    }else if (idade >= 0){
      printf("Você é menor de idade!\n");
    }else{
      return 0;
    }
  }
  
}