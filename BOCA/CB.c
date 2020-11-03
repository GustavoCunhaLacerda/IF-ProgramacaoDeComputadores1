#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    float matriz[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) scanf("%f", &matriz[i][j]);
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            printf("%.2f", matriz[j][i]);
            if (j<n-1)
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
