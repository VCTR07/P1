// BUBBLE SORT

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>

void bubble_sort(int vetor[], int tam){
	//variável auxiliar
	int proximo = 0;

	//varre todo o vetor externo
	for(int i = 0; i < tam; i++){
		//trabalha com os próximos elementos
		for(int j = 0; j < (tam - 1); j++){
			//Ocorre a troca
	        if(vetor[j] > vetor[j+1]){
	        	proximo = vetor[j];
	        	vetor[j] = vetor[j+1];
	        	vetor[j+1]=proximo;
	        }
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
