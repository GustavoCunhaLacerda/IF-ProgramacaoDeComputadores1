#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// macros 
#define showi(x) printf("%s -> %d\n", #x, x);
#define showf(x) printf("%s -> %f\n", #x, x);
#define shows(x) printf("%s -> %s\n", #x, x);
#define showd(x) printf("%s -> %lf\n", #x, x);
// typedefs
typedef unsigned int uint;
typedef long int lint;
typedef long long int llint;
typedef unsigned long long int ulli;
// bool simulation
#define true 1
#define false 0

int main(void){
    int n,m;
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < m; coluna++){
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    for(int coluna = 0; coluna < m; coluna++){
        for(int linha = 0; linha < n; linha++){
            printf("%d ", matriz[linha][coluna]);
        }
        putchar('\n');
    }

    return 0;
}