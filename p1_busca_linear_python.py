#Grupo Victor Emanuel e Caio

import time
import random
#Busca Linear

def busca_linear(A, n, x):  #O(n) predomina
    resposta = -1                   #O(1)
    for i in range(0, n):           #O(n)
        if A[i]==x: resposta = i    #O(1)
    return resposta                 #O(1)

def busca_linear_melhorada(A, n, x): #O(n) no pior caso
    reposta = -1
    for i in range(0, n):
        if A[i] == x: 
            resposta = i 
            break
    return resposta

def busca_linear_sentinela(A, n, x): #O(n) no pior caso
    resposta = -1

    ultimo = A[n-1]
    A[n-1] = x
    i = 0

    while A[i] != x:
        i+=1

    A[n-1] = ultimo

    if i < n-1 or A[n-1] == x:
        resposta = i

    return resposta

#Entardas
A=list(range(0,10000)) #cria uma lista com elementos de 0 a 10.000
random.shuffle(A) # embaralha a lista criada
n=len(A)
#x=random.randrange(0, 10000) # escolhe um número entre 0 e 10.0000
x= 5758


#Saída Busca Linear
inicia_tempo = time.time_ns()
saida = busca_linear(A, n, x)
termina_tempo=time.time_ns()
tempo_total = termina_tempo - inicia_tempo
print(f"Na BL, para o número {x} temos a resposta {saida}, com tempo de execução em ns de {tempo_total}.")

#Saída Busca Linear Melhorada
inicia_tempo = time.time_ns()
saida = busca_linear_melhorada(A, n, x)
termina_tempo=time.time_ns()
tempo_total = termina_tempo - inicia_tempo
print(f"Na BLM, para o número {x} temos a resposta {saida}, com tempo de execução em ns de {tempo_total}.")

#Saída Busca Linear com Sentinela
inicia_tempo = time.time_ns()
saida = busca_linear_sentinela(A, n, x)
termina_tempo=time.time_ns()
tempo_total = termina_tempo - inicia_tempo
print(f"Na BLS, para o número {x} temos a resposta {saida}, com tempo de execução em ns de {tempo_total}.")