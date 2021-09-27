# INSERTION SORT

import random

lista = random.sample(range(1, 10001), 10000)

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

insertion_sort(lista)

print(lista[0:10])