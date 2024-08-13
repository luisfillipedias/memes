#include <stdio.h>

#define TAMANHO 7

void rotacionarDireita(int vetor[], int tamanho, int rotacoes) {
    int vetorAux[tamanho];
    
    rotacoes = rotacoes % tamanho;

    for (int i = 0; i < tamanho; i++) {
        vetorAux[i] = vetor[i];
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[(i + rotacoes) % tamanho] = vetorAux[i];
    }
}

int main() {
    int vetor[TAMANHO] = {4, 7, 1, 3, 7, 2, 20};
    int rotacoes;

    printf("Vetor original: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Número de rotações: ");
    scanf("%d", &rotacoes);

    rotacionarDireita(vetor, TAMANHO, rotacoes);

    printf("Vetor após rotação: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
