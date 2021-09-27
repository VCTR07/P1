// INSERTION SORT

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>

void insert_sort(int vetor[], int tam){
  int troca;

  //Percorre todo o vetor
  for(int i = 1; i < tam; i++){
    int proximo = i;

    //Responsável pelas trocas
    while((proximo != 0) && (vetor[proximo] < vetor[proximo - 1])){
      troca = vetor[proximo];
      vetor[proximo] = vetor[proximo - 1];
      vetor[proximo - 1] = troca;
      proximo--;
    }
  }
}

int main() {

  clock_t t;

  int vetor[10000];
  srand(10000);
  for (int i = 0; i < 10000; i++){ //O(n)
      vetor[i] = rand();
  }
  int n = sizeof(vetor)/sizeof(int);


   t = clock();
   //Aplicando a ordenação;
   insert_sort(vetor, 10000);
   t = clock() - t;

   //Apresentando o vetor ordenado
   for(int i = 0; i < 50; i++){
	   printf("%d\t", vetor[i]);
   }
   printf("...");
   printf("\nTempo de execucao: %d", t);

}