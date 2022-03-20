typedef struct Data{
  int dia;
  int mes;
  int ano;
}Data;

typedef struct Professor{
  int matricula;
  char nome[50];
  char sexo; 
  Data data_nasc;
  char cpf[16];
}Professor;

int Inserir_professor(Professor professor[], int qtd_professor);

void Listar_professor();