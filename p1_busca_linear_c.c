# include<time.h>
# include<stdio.h>
#include<stdlib.h>

int buscaLinearSentinela(int a[], int n, int x){ // no pior caso 2x O(n) = O(n)
    int resposta = -1;

    int ultimo = a[n-1];
    a[n-1] = x;
    int i = 0;

    while (a[i] != x){  //O(n)
        i+=1;
        }
    
    a[n-1] = ultimo;

    if (i < n-1 | a[n-1] == x){
        resposta = i;
    }
    return resposta;
}

int main (){

    int a[10000];
    srand(150);
    for (int i = 0; i < 10000; i++){ //O(n)
        a[i] = rand();
    }
    int n = sizeof(a)/sizeof(int);
    int x = 255; //255 foi encontrado.

    float tempo;
    time_t t_ini, t_fim;
    t_ini = time(NULL);
    int saida = buscaLinearSentinela(a, n, x);    
    t_fim = time(NULL);
    tempo = difftime(t_fim, t_ini);

    printf("Na BLS, para o número %d temos a resposta %d, com tempo de execução em ns de %f.", x, saida, tempo);

    return 0;
}