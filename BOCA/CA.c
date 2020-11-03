#include <stdio.h>

int main() {
    int n1, m1, n2, m2;
    
    scanf("%d %d %d %d", &n1, &m1, &n2, &m2);

    float soma, A[n1][m1], B[n2][m2];

    
    for (int i = 0; i < n1; i = i + 1) {
        for (int j = 0; j < m1; j = j + 1) scanf("%f", &A[i][j]);
    }

    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) scanf("%f", &B[i][j]);
    }
    
    if (m1!=n2)
    {
        puts("impossivel");
        return 0;
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            soma = 0;
            for (int k = 0; k < m1; k++) soma += A[i][k] * B[k][j];
            printf("%.2f ", soma);
        }
        puts("");
    }
    return 0;
}