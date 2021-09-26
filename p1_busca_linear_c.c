# include<time.h>
# include<stdio.h>
#include<stdlib.h>

int buscaLinear(int a[], int n, int x){
    int i;
    for (i = 0; i < n; i++){
        if (a[i] == x){
            return i;
        }
    }
    return -1;
}

int main (){

    int a[10000];
    srand(150);
    for (int i = 0; i < 10000; i++){
        a[i] = rand();
    }
    int n = sizeof(a)/sizeof(int);
    int x = 255; //255 foi encontrado.

    float tempo;
    time_t t_ini, t_fim;
    t_ini = time(NULL);
    int saida = buscaLinear(a, n, x);    
    t_fim = time(NULL);
    tempo = difftime(t_fim, t_ini);

    printf("Na BL, para o número %d temos a resposta %d, com tempo de execução em ns de %f.", x, saida, tempo);

    return 0;
}