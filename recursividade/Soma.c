#include <stdio.h>

int somatoria = 0;

int main(void) {
    int valores[5] = {2,4,6,7,8};

    int tamanho = sizeof((valores)) / sizeof(int);
    
    for (int i = 0; i < tamanho; i++) {
       somatoria =  somatorio(valores, i);
    }

    printf("%d\n", somatoria);
    return 0;
}

int somatorio( int vetor[], int posicao) {
    if (posicao == 0) {
        return vetor[posicao];
    } else {
        return vetor[posicao] + somatorio(vetor, (posicao-1));
    }
}
