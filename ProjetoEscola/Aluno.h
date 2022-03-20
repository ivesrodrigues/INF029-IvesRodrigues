typedef struct Data
{
  int dia;
  int mes;
  int ano;
}Data;

typedef struct Aluno
{
int matricula;
char nome[50];
char sexo;
Data data_nasc;
char cpf[16];
}Aluno;

int Inserir_aluno (Aluno alunos[], int qt_alunos);
void Listar_aluno ();