#Grupo Victor Emanuel e Caio

import time
import random
#Busca Linear

def busca_linear(A, n, x):
    resposta = -1
    for i in range(0, n):
        if A[i]==x: resposta = i
    return resposta

#Entardas
A=list(range(0,10000)) #cria uma lista com elementos de 0 a 10.000
random.shuffle(A) # embaralha a lista criada
n=len(A)
x=random.randrange(0, 10000) # escolhe um número entre 0 e 10.0000

#Saída
inicia_tempo = time.time_ns()
saida = busca_linear(A, n, x)
termina_tempo=time.time_ns()
tempo_total = termina_tempo - inicia_tempo
print(f"Para o número {x} temos a resposta {saida}, com tempo de execução em ns de {tempo_total}.")