// SELECTION SORT

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>

void select_sort(int vetor[], int tam){
  int menor, troca;                                                       // 1 vez
  //Loop externo para repassar todo vetor
  for(int i = 0; i < (tam-1); i++){                                       // n-1 vezes
	//variável para acompanhar o loop for pegando sempre o menor elemento
	menor = i;                                                              // 1 vez por loop
	//Loop interno para trabalhar com o próximo elemento
    for(int j = (i+1); j < tam; j++){                                     // n-1 vezes
      if(vetor[j] < vetor[menor]){                                        // 1 vez por loop
        menor = j;                                                        // 1 vez por loop
      }
    }
    //Onde ocorre a troca
    if(i != menor){                                                       // 1 vez por loop
      troca = vetor[i];                                                   // 1 vez por loop
      vetor[i] = vetor[menor];                                            // 1 vez por loop
      vetor[menor] = troca;                                               // 1 vez por loop
    }                                                                     // Total = 1 + 5(n-1) + (n^2+n-2)/2
  }                                                                       // que eh aproximadamente (n^2)/2 ou O(n^2)
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
