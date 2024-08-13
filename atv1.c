#include <stdio.h>

#define TAMANHO 10

int contem(int arr[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == valor) {
            return 1;
        }
    }
    return 0;
}

void encontrarInterseccao(int A[], int B[], int C[], int tamanhoA, int tamanhoB, int *tamanhoC) {
    *tamanhoC = 0;
    for (int i = 0; i < tamanhoA; i++) {
        if (A[i] != 0 && contem(B, tamanhoB, A[i]) && !contem(C, *tamanhoC, A[i])) {
            C[*tamanhoC] = A[i];
            (*tamanhoC)++;
        }
    }
}

int main() {
    int A[TAMANHO] = {4, 7, 1, 3, 7, 2, 20};
    int B[TAMANHO] = {2, 4, 9, 3, 1, 9, 4};
    int C[TAMANHO];
    int tamanhoC;

    encontrarInterseccao(A, B, C, TAMANHO, TAMANHO, &tamanhoC);

    printf("Vetor A: ");
    for (int i = 0; i < TAMANHO; i++) {
        if (A[i] != 0) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");

    printf("Vetor B: ");
    for (int i = 0; i < TAMANHO; i++) {
        if (B[i] != 0) {
            printf("%d ", B[i]);
        }
    }
    printf("\n");

    printf("Interseção: ");
    for (int i = 0; i < tamanhoC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
