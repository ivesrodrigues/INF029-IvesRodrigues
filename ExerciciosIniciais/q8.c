#include <stdio.h>


int main(){
  int valor1, fat;
  
  printf("Digite um número: ");
  scanf("%d", &valor1);

  if (valor1 == 0){ //condição para fotorial de zero   
    fat = 1;
  }
  if (valor1 < 0){ //condição para fotorial de zero   
    printf("O número para o resultado do fatorial é inválido!\n");
    return 0;
  }
  if (valor1 > 0){
    for (fat = 1; valor1 > 1; valor1 = valor1 - 1){
      fat = fat * valor1;
    }            
  }
      
  if (fat > 0){
    printf("O resultado do fatorial é: %d\n", fat);  
  }else{   
    printf("O resultado do fatorial é inválido!\n");
  }
 
  return 0;
}



            
