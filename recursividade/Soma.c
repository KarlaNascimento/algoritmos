#include <stdio.h>

int somatorio( int vetor[], int posicao) {
    if (posicao == 0) {
        return vetor[posicao];
    } else {
        return vetor[posicao] + somatorio(vetor, (posicao-1));
    }
}

int main(void) {
    int valores[5] = {2,4,6,7,8};

    int tamanho = sizeof((valores)) / sizeof(int);
    
    int somatoria =  somatorio(valores, tamanho);

    printf("%d\n", somatoria);
    return 0;
}

