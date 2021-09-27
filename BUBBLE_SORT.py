# BUBBLE SORT

import random
import time

lista = random.sample(range(1, 10001), 10000)
random.shuffle(lista)

def bubble_sort(lista):
    n = len(lista)                                                  # 1 vez
    for j in range(n-1):                                            # n-1 vezes
        for i in range(n-1):                                        # n-1 vezes
            if lista[i] > lista[i+1]:                               # 1 vez por loop
                lista[i], lista[i+1] = lista[i+1], lista[i]         # equivale a 4 vezes por loop
    return lista                                                    # Total = 1 + 5(n-1)*(n-1) 
                                                                    # que é aproximadamente n^2 ou O(n^2)
inicio = time.time()    
bubble_sort(lista)
fim = time.time()

print(lista[0:10])
print("tempo de execução: ", fim - inicio)
