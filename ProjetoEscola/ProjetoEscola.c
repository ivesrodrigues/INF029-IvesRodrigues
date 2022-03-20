#include <stdio.h>
#include <stdlib.h>
#define TAM 5
//#include "Aluno.h"
#include "Professor.h"

int menu_principal ();
int menu_cadastro ();
int menu_exclusao ();
int menu_alteracao ();
int menu_ins_exc ();
int menu_relatorio ();

int main(){
    //Aluno alunos[TAM];
    Professor professor[TAM];
    int qt_alunos = 0, qtd_professor = 0;
    int op_principal=0, op_cadastro=0,op_exclusao=0,op_alteracao=0,
    op_inc_exc=0,op_relatorio=0,sair=0, retorno_func=0;
    op_principal = menu_principal();
    switch(op_principal){
      //caso a opção no menu principal tenha sido sair
      case 0:
        sair=1;
        break;
      //Caso a opção no menu principal tenha sido cadastrar aluno
      case 1:
        op_cadastro = menu_cadastro();
        switch(op_cadastro){
          case 0:
          break;
          case 1:
          /*retorno_func = Inserir_aluno(alunos, qt_alunos);
          if (retorno_func == -1){
            printf("Cadastro realizado com sucesso.");
          }else if (retorno_func == -2){
            printf("Cadastro não realizado. A matrícula inserida não é válida.");
          }else if (retorno_func == -3){
            printf("Cadastro não realizado. O nome inserido não é válido.");
          }else if (retorno_func == -4){
            printf("Cadastro não realizado. O sexo inserido não é valido.");
          }else if (retorno_func == -5){
            printf("Cadastro não realizado. A data inserida não é válida.");
          }
        }*/
      case 2:
        op_cadastro = menu_cadastro();
        switch(op_cadastro){
          case 0:
          break;
          case 2:
          retorno_func = Inserir_professor(professor, qtd_professor);
          if (retorno_func == -1){
            printf("Cadastro realizado com sucesso.");
          }else if (retorno_func == -2){
            printf("Cadastro não realizado. A matrícula inserida não é válida.");
          }else if (retorno_func == -3){
            printf("Cadastro não realizado. O nome inserido não é válido.");
          }else if (retorno_func == -4){
            printf("Cadastro não realizado. O sexo inserido não é valido.");
          }else if (retorno_func == -5){
            printf("Cadastro não realizado. A data inserida não é válida.");
          }
        }
      }
      }   
  }
 
//Área das funcões:  
int menu_principal (){
  system ("clear");
  int opcao;
  printf("Favor inserir a opção desejada:\n");
  printf("Digite 0 para sair;\n");
  printf("Digite 1 para cadastros;\n");
  printf("Digite 2 para exclusões;\n");
  printf("Digite 3 para alteração;\n");
  printf("Digite 4 para inseção/exclusão;\n");
  printf("Digite 5 para relatórios;\n");
  scanf("%d",&opcao);
  return opcao;
}
  
int menu_cadastro (){
  system ("clear");
  int opcao=0;
  printf("Digite 1 para cadastro de aluno;\n");
  printf("Digite 2 para cadastro de professor;\n");
  printf("Digite 3 para cadastro de disciplina;\n");
  printf("Digite 0 para voltar ao menu principal;\n");
  scanf("%d",&opcao);
  return opcao;
}
  
int menu_exclusao (){
  system ("clear");
  int opcao=0;
  printf("Digite 1 para exclusão de aluno;\n");
  printf("Digite 2 para exclusão de professor;\n");
  printf("Digite 3 para exclusão de disciplina;\n");
  printf("Digite 0 para voltar ao menu principal;\n");
  scanf("%d",&opcao);
  return opcao;
}
  
int menu_alteracao (){
  system ("clear");
  int opcao=0;
  printf("Digite 1 para alteração de aluno;\n");
  printf("Digite 2 para alteração de professor;\n");
  printf("Digite 3 para alteração de disciplina;\n");
  printf("Digite 0 para voltar ao menu principal;\n");
  scanf("%d",&opcao);
  return opcao;
}
  
int menu_ins_exc (){
  system ("clear");
  int opcao=0;
  printf("Digite 1 para inserção de aluno em disciplina;\n");
  printf("Digite 2 para exclusão de aluno em disciplina;\n");
  printf("Digite 0 para voltar ao menu principal;\n");
  scanf("%d",&opcao);
  return opcao;
}
  
int menu_relatorio (){
  system ("clear");
  int opcao=0;
  printf("Digite 1 para listar alunos;\n");
  printf("Digite 2 para listar professores;\n");
  printf("Digite 3 para listar disciplinas (dados sem da disciplina sem alunos);\n");
  printf("Digite 4 para listar disciplinas (dados da disciplina e os alunos matriculados;\n");
  printf("Digite 5 para listar alunos por sexo;\n");
  printf("Digite 6 para listar alunos ordenados por nome;\n");
  printf("Digite 7 para listar alunos por nascimento;\n");
  printf("Digite 8 para listar professores por sexo;\n");
  printf("Digite 9 para listar professores por nome;\n");
  printf("Digite 10 para listar professores por nascimento;\n");
  printf("Digite 11 para listar aniversariantes do mês;\n");
  printf("Digite 12 para listar professores ou alunos a partir de uma busca específica;\n");
  printf("Digite 13 para listar alunos matriculados em ao menos três disciplinas, digite 13;\n");
  printf("Digite 14 para listar disciplinas que extrapolam 40 vagas, com nome dos professores;\n");
  printf("Digite 0 para voltar ao menu principal;\n");
  return opcao;
}
