#include <stdio.h>

#define TAMANHO 10
#define TAMANHO_C (2 * TAMANHO)

int contem(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return 1;
        }
    }
    return 0;
}

void unirVetores(int A[], int B[], int C[], int tamanhoA, int tamanhoB, int *tamanhoC) {
    int i, j;
    *tamanhoC = 0;

    for (i = 0; i < tamanhoA; i++) {
        if (!contem(C, *tamanhoC, A[i])) {
            C[*tamanhoC] = A[i];
            (*tamanhoC)++;
        }
    }

    for (i = 0; i < tamanhoB; i++) {
        if (!contem(C, *tamanhoC, B[i])) {
            C[*tamanhoC] = B[i];
            (*tamanhoC)++;
        }
    }
}

int main() {
    int A[TAMANHO], B[TAMANHO], C[TAMANHO_C];
    int tamanhoC;

    printf("Digite %d elementos para o vetor A:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite %d elementos para o vetor B:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &B[i]);
    }

    unirVetores(A, B, C, TAMANHO, TAMANHO, &tamanhoC);

    printf("Vetor resultante (sem repeticoes): ");
    for (int i = 0; i < tamanhoC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
