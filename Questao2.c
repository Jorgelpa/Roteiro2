#include <stdio.h>
#include <string.h>

typedef struct{
  char nome[20];
  char tipoM[20];
  int integrantes;
  int rank;
}tBanda;

tBanda banda;

void inputShowBanda(){
   int i;
   for(i=0; i<5; i++){
     printf("Digite o nome da Banda %d: ", i+1);
     scanf("%s", &banda[i].nome);

     printf("\nDigite o ritmo da Banda %d: ", i+1);
     scanf("%s", &banda[i].tipoM);

     printf("\nDigite o numero de integrantes da Banda %d: ", i+1);
     scanf("%d", &banda[i].integrantes);

     printf("\nDigite o rank da Banda %d: ", i+1);
     scanf("%d", &banda[i].rank);
   }
  for(i=0; i<5; i++){
    puts("\n------------------------------------------------\n");
    printf("\nNome da Banda %d: %s\n", i+1, banda[i].nome);
    printf("\nRitmo da Banda %d: %s", i+1, banda[i].tipoM);
    printf("\nNumero de integrantes da Banda %d: %d", i+1, banda[i].integrantes);
    printf("\nRanking da Banda %d: %d", i+1, banda[i].rank);
  }
}

void funcaoranking(){
  int input;
  puts("Entre com o ranking da Banda no qual voce quer ver as informacoes: ");
  scanf("%d", &input);

  printf("\nNome da Banda: %s\n", banda[input].nome);
  printf("\nRitmo da Banda: %s", banda[input].tipoM);
  printf("\nNumero de integrantes da Banda: %d", banda[input].integrantes);
  printf("\nRanking da Banda %d", banda[input].rank);
}

void showTipoMusica(){
  char tipomus[20];
  int i;
  printf("Entre com o tipo de musica da banda no qual voce quer ver as informacoes: ");
  scanf("%s", &tipomus);

  for(i=0; i<5; i++){
    if(tipomus == banda[i].tipoM){
      printf("\nA banda %s esta na lista desse tipo de musica!", banda[i].nome);
    }else{
      continue;
    }
  }
}

void nomeBanda(){
  char nomeIn;
  int i, count=0;

  Printf("Insira o nome da banda no qual voce quer verificar se esta na lista favorita: ");
  scanf("%s", nomeIn);

  for(i=0; i<5; i++){
    if(nomeIn == banda[i].nome){
      printf("A banda foi verificada com sucesso na sua lista de favoritos!");
      count++;
    }else{
      continue;
    }
  }
  if(count == 0){
    printf("A banda nao existe na sua lista de favoritos!");
  }
}

int main(){

  inputShowBanda();
  funcaoranking();
  showTipoMusica();
  nomeBanda();

  return 0;
}
