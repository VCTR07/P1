# SELECTION SORT

import random
import time

lista = random.sample(range(1, 10001), 10000)
random.shuffle(lista)

def selection_sort(lista):
    n = len(lista)                                  # 1 vez
    for j in range(n-1 ):                           # (n-1) vezes
        min_index = j                               # 1 vez a cada loop
        for i in range(j, n):                       # (n^2+n-2)/2
            if lista[i] < lista[min_index]:         
                min_index = i
        if lista[j] > lista[min_index]:             # 1 vez por loop
            aux = lista[j]                          # 1 vez por loop
            lista[j] = lista[min_index]             # 1 vez por loop
            lista[min_index] = aux                  # 1 vez por loop
                                                    # Total = 1 + 5(n-1) + (n^2+n-2)/2 que é aproximadamente (n^2)/2
    return lista                                    # ou O(n^2)

inicio = time.time()
selection_sort(lista)
fim = time.time()

print(lista[0:10])
print('Tempo de execução: ', fim - inicio)