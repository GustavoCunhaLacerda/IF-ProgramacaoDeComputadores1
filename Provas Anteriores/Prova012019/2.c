#include <stdio.h>

int main() {
    int vet[1000], n, distintos = 1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vet[i] == vet[j] && i!=j) {
                distintos = 0;
            }
        }
    }

    if (distintos == 1) printf("Sim\n");
    else printf("Não\n");
 
    return 0;
}