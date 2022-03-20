#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "Aluno.h"
#define TAM 5
#define SUCESSO -1
#define ERRO_MATRICULA -2
#define ERRO_NOME -3
#define ERRO_SEXO -4
#define ERRO_NASCIMENTO -5
#define ERRO_CPF -6


int Inserir_aluno (Aluno alunos[], int qt_alunos){
  int validar_cpf=0;
  system ("clear");
  printf("-- Inserção de alunos --\n\n" );
  
  printf("Digite a matricula do aluno:\n");
  scanf("%d",&alunos[qt_alunos].matricula);
  setbuf(stdin, 0);

  if(alunos[qt_alunos].matricula <= 0){
    return ERRO_MATRICULA;
  }
  
  printf("Digite o nome do aluno:\n");
  fgets(alunos[qt_alunos].nome, 50, stdin); 
  size_t ln = strlen(alunos[qt_alunos].nome) - 1; 
  if (alunos[qt_alunos].nome[ln] == '\n'){
    alunos[qt_alunos].nome[ln] = '\0';
  }
    
  printf("Digite o sexo do aluno:\n");
  scanf ("%c", &alunos[qt_alunos].sexo); 
  if (alunos[qt_alunos].sexo != 'M'  && alunos[qt_alunos].sexo != 'F' && alunos[qt_alunos].sexo != 'f' && alunos[qt_alunos].sexo != 'm'){
    return ERRO_SEXO;
  }

  printf("Digite a data de nascimento do aluno:\n");
  scanf ("%d", &alunos[qt_alunos].data_nasc.dia);
  if (alunos[qt_alunos].data_nasc.dia < 1 || alunos[qt_alunos].data_nasc.dia >31){
    return ERRO_NASCIMENTO;
  }

  printf("Digite o mês de nascimento do aluno:\n");
  scanf ("%d", &alunos[qt_alunos].data_nasc.mes);
  if (alunos[qt_alunos].data_nasc.mes < 1 || alunos[qt_alunos].data_nasc.mes >12){
    return ERRO_NASCIMENTO;
  }
  else if (alunos[qt_alunos].data_nasc.mes == 2 && alunos[qt_alunos].data_nasc.dia>29){
    return ERRO_NASCIMENTO;
  }
  printf("\nDigite o CPF do aluno, utilizar apenas números:\n ");
  fgets(alunos[qt_alunos].cpf, 11, stdin);
  printf("%s", alunos[qt_alunos].cpf); 

  return SUCESSO;
}

void Listar_aluno(Aluno alunos[], int qt_alunos){
  system("clear");
  if (qt_alunos=0){
    printf("Não existem alunos cadastrados no sistema.\n");
  }
  else{
    printf("-- Listagem de aluno --\n\n" );
    int i=0;
    for(i=0;i<qt_alunos;i++){
      printf ("Matrícula: %d\n", alunos[i].matricula);
      printf ("Nome: %s\n", alunos[i].nome);
      printf ("Sexo: %c\n", alunos[i].sexo);
      printf ("Data de nascimento: %d/%d/%d", alunos[i].data_nasc.dia, alunos[i].data_nasc.mes, alunos[i].data_nasc.ano);
      printf("Número CPF: %s\n", alunos[i].cpf);
    }
  }
  }
