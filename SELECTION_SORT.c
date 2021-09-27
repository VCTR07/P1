// SELECTION SORT

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>

void select_sort(int vetor[], int tam){
  int menor, troca;
  //Loop externo para repassar todo vetor
  for(int i = 0; i < (tam-1); i++){
	//variável para acompanhar o loop for pegando sempre o menor elemento
	menor = i;
	//Loop interno para trabalhar com o próximo elemento
    for(int j = (i+1); j < tam; j++){
      if(vetor[j] < vetor[menor]){
        menor = j;
      }
    }
    //Onde ocorre a troca
    if(i != menor){
      troca = vetor[i];
      vetor[i] = vetor[menor];
      vetor[menor] = troca;
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
   select_sort(vetor, 10000);
   t = clock() - t;

   //Apresentando o vetor ordenado
   for(int i = 0; i < 50; i++){
	   printf("%d\t", vetor[i]);
   }
   printf("...");
   printf("\nTempo de execucao: %d", t);

}
