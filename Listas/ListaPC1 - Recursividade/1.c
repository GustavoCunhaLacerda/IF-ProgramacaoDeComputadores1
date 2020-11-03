#include <stdio.h>
#include <stdlib.h>

void le_vetor(int* vet, int n, int i) {
    if (i < n) {
        scanf("%d", &vet[i]);
        le_vetor(vet, n, i+1);
    }
}

void imprime_vet(int* vet, int n, int i) {
    if (i < n) {
        printf("%d ", vet[i]);
        imprime_vet(vet, n, i+1);
    } 
    else {
        putchar('\n');
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int i = 0; // inicio do vetor
    int *vet = malloc(n*sizeof(int));

    le_vetor(vet, n, i);
    imprime_vet(vet, n, i);
    return 0;
}
