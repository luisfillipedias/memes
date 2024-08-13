#include <stdio.h>
#include <math.h>

#define TAMANHO 10

double calcularMedia(double vetor[], int tamanho) {
    double soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma / tamanho;
}

double calcularDesvioPadrao(double vetor[], int tamanho, double media) {
    double somaQuadrados = 0.0;
    for (int i = 0; i < tamanho; i++) {
        somaQuadrados += pow(vetor[i] - media, 2);
    }
    return sqrt(somaQuadrados / tamanho);
}

int main() {
    double vetor[TAMANHO];
    double media, desvioPadrao;

    printf("Digite %d números reais:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%lf", &vetor[i]);
    }

    media = calcularMedia(vetor, TAMANHO);
    desvioPadrao = calcularDesvioPadrao(vetor, TAMANHO, media);

    printf("Média: %.2lf\n", media);
    printf("Desvio Padrão: %.2lf\n", desvioPadrao);

    return 0;
}
