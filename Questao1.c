#include <stdio.h>
#include <string.h>

typedef struct
{
  char nome[30], endereco[50];
  char matricula[10], curso[30];
}tAluno;

tAluno gAlunos[100];

unsigned int consultaAlunosPorCurso(char *curso){
  int i, count;
  char cursoE[20];

  printf("Entre com o curso no qual voce quer verificar: ");
  scanf("%s", &cursoE);

  for(i=0; i<100; i++){
    if(cursoE == gAlunos[i].curso){
      count++;
    }
  }
  return count;
}

int main(){
  int i, escolha;
  char entrada[20];

  for(i=0; i<100; i++){
    printf("Digite o nome do aluno: ");
    scanf("%s", &gAlunos[i].nome);

    printf("\nDigite o endereco do aluno: ");
    scanf("%s", &gAlunos[i].endereco);

    printf("\nEntre com a matricula do aluno: ");
    scanf("%s", &gAlunos[i].matricula);

    printf("\nDigite o que o aluno cursa: ");
    scanf("%s", &gAlunos[i].curso);

    printf("deseja cadastrar novamente? 1-SIM 2-NAO\n");
    scanf("%d", &escolha);

    if(escolha == 1){
      continue;
    }else{
      break;
    }
  }

  escolha=0;

  puts("Deseja fazer a consulta? 1-SIM 2-NAO\n");
  scanf("%d", &escolha);

  for(i=0; i<100; i++){

    if(escolha == 1){
      printf("O numero de alunos do curso eh: %d", consultaAlunosPorCurso(gAlunos[i].curso));
    }
  }
  return 0;
}
