# INSERTION SORT

import random
import time

lista = random.sample(range(1, 10001), 10000)
random.shuffle(lista)

def insertion_sort(lista):
    n = len(lista)                              # 1 vez
    for i in range(1, n):                       # n-1 vezes
        chave = lista[i]                        # 1 vez por loop
        j = i-1                                 # 1 vez por loop
        while j >= 0 and lista[j] > chave:      # n vezes
            lista[j+1] = lista[j]               # 1 vez por loop
            j = j-1                             # 1 vez por loop
        lista[j + 1] = chave                    # 1 vez por loop
    return lista                                # Total: 1 + [(n-1) + 2]*(n + 2) que eh aproximadamente n^2 ou O(n^2)

inicio = time.time()
insertion_sort(lista)
fim = time.time()

print(lista[0:10])
print("tempo de execução: ", fim - inicio)