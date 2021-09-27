# BUBBLE SORT

import random
import time

lista = random.sample(range(1, 10001), 10000)
random.shuffle(lista)

def bubble_sort(lista):
    n = len(lista)
    for j in range(n-1):
        for i in range(n-1):
            if lista[i] > lista[i+1]:
                lista[i], lista[i+1] = lista[i+1], lista[i]
    return lista
    
inicio = time.time()    
bubble_sort(lista)
fim = time.time()

print(lista[0:10])
print("tempo de execução: ", fim - inicio)
