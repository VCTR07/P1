# INSERTION SORT

import random
import time

lista = random.sample(range(1, 10001), 10000)
random.shuffle(lista)

def insertion_sort(lista):
    n = len(lista)
    for i in range(1, n):
        chave = lista[i]
        j = i-1
        while j >= 0 and lista[j] > chave:
            lista[j+1] = lista[j]
            j = j-1
        lista[j + 1] = chave
    return lista

inicio = time.time()
insertion_sort(lista)
fim = time.time()

print(lista[0:10])
print("tempo de execução: ", fim - inicio)