# BUBBLE SORT

import random

lista = random.sample(range(1, 10001), 10000)

def bubble_sort(lista):
    n = len(lista)
    for j in range(n-1):
        for i in range(n-1):
            if lista[i] > lista[i+1]:
                lista[i], lista[i+1] = lista[i+1], lista[i]
    return lista
    
bubble_sort(lista)

print(lista[0:10])
