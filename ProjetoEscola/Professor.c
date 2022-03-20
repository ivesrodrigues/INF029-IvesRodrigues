#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Professor.h"
#define TAM 5
#define SUCESSO -1
#define ERRO_MATRICULA -2
#define ERRO_NOME -3
#define ERRO_SEXO -4
#define ERRO_NASCIMENTO -5
#define ERRO_CPF -6

int Inserir_professor(Professor professor[], int qtd_professor){
  int validar_cpf = 0;
  system ("clear");
  printf("-- Inserção de professor --\n\n");
  printf("Digite a matricula do professor(a):\n");
  scanf("%d",&professor[qtd_professor].matricula);
  setbuf(stdin, 0);
  
  if(professor[qtd_professor].matricula <= 0){
    return ERRO_MATRICULA;
  }
}

printf("Digite o nome do professor:\n");
  fgets(professor[qtd_professor].nome, 50, stdin); 
  size_t ln = strlen(professor[qtd_professor].nome) - 1; //size_t = unsigned integer type
  if (professor[qtd_professor].nome[ln] == '\n'){
      professor[qtd_professor].nome[ln] = '\0';
  }


/*void listarProfessores (Professores professores[], int qtd_professores){
    if(qtd_professores<0){
        printf("\nNão existem professores cadastrados.\n");
    }else{
        printf("\n------------ Listagem de professores ------------n");
        int i;

        for(i=0;i<qtd_professores;i++){
            printf("\n");
            printf("Matrícula .....:  %d\n", professores[i].matricula);
            printf("Nome .....:  %s\n", professores[i].nome);
            printf("Sexo .....:  %c\n", professores[i].sexo);
            printf("Data de nascimento .....:  %d/%d/%d\n", professores[i].data_nasc.dia, professores[i].data_nasc.mes, professores[i].data_nasc.ano);
            printf("CPF .....:  %s\n", professores[i].cpf);
        }
    }
}// // */