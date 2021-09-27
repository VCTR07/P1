// BUBBLE SORT

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>

void bubble_sort(int vetor[], int tam){
	//variável auxiliar
	int proximo = 0;								// 1 vez

	//varre todo o vetor externo
	for(int i = 0; i < tam; i++){					// n-1 vezes
		//trabalha com os próximos elementos
		for(int j = 0; j < (tam - 1); j++){			// n-1 vezes
			//Ocorre a troca
	        if(vetor[j] > vetor[j+1]){				// 1 vez por loop
	        	proximo = vetor[j];					// 1 vez por loop
	        	vetor[j] = vetor[j+1];				// 1 vez por loop
	        	vetor[j+1]=proximo;					// 1 vez por loop
	        }										// Total = 1 + (n-1)*[(n-1) + 4] que ef aproximadamente n^2 ou O(n^2)
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
   bubble_sort(vetor, 10000);
   t = clock() - t;

   //Apresentando o vetor ordenado
   for(int i = 0; i < 50; i++){
	   printf("%d\t", vetor[i]);
   }
   printf("...");
   printf("\nTempo de execucao: %d", t);

}