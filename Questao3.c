#include <stdio.h>
#include <string.h>

double percentual(int votos, int total){
  return votos / total;
}

int main(){

  int i, in, ar[23]={0}, totalV=0, maiorE, maiorV;

  puts("Enquete: Quem foi o melhor jogador?\n\n");

  while(1){
    puts("Numero do jogador(0=fim): ");
    scanf("%d", &in);
    if(in < 1 || in > 23){
      puts("\nInforme um valor entre 1 e 23 ou 0 para sair!\n");
      continue;
    }else if(in == 0){
      break;
    }else{
      ar[in-1]++;
      totalV++;
    }
  }

  puts("Resultado da votacao:\n\n");
  printf("Foram computados %d votos.", totalV);

  puts("Jogador\t\tVotos\t\tPorcentagem\n\n");

  for(i=0; i<23; i++){
    if(ar[i]>0){
      printf("%d\t\t%d\t\t%.1lf", i, ar[i], percentual(ar[i], totalV));
    }
  }

  for(i=0; i<23; i++){
    if(ar[i+1]>ar[i]){
      maiorE=i;
      maiorV=ar[i];
    }else{
      continue;
    }
  }

  printf("O melhor jogador foi o numero %d, com %d votos,"
   "correspondendo a %.0lf porcento do total de votos.", maiorE, maiorV, percentual(ar[maiorE], totalV));

  return 0;
}
