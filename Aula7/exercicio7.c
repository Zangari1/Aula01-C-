#include <stdio.h>
/*
a) Qual foi o menor valor do contador para a busca linear? Em que situação
ocorreu?
Menor valor do contador na busca linear: 1.
Situação: Elemento está na primeira posição do vetor.
b) Qual foi o maior valor do contador para a busca linear? Em que situação
ocorreu?
Maior valor do contador na busca linear: n (tamanho do vetor).
Situação: Elemento está na última posição ou não está no vetor.
c) Qual foi o menor valor do contador para a busca binária? Em que situação
ocorreu?
Menor valor do contador na busca binária: 1.
Situação: Elemento encontrado na primeira verificação (posição do meio).
d) Qual foi o maior valor do contador para a busca binária? Em que situação
ocorreu?
Maior valor do contador na busca binária: ⌊log₂(n)⌋ + 1.
Situação: Elemento encontrado no pior caso após várias divisões.
e) Se o vetor tivesse 256 números, qual seria o pior caso (maior valor do
contador) ao utilizar a busca linear?
256
f) Se o vetor tivesse 256 números, qual seria o pior caso (maior valor do
contador) ao utilizar a busca binária?
9 (pois log₂(256) = 8, então 8 + 1 = 9).
*/