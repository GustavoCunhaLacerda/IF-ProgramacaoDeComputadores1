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
    int n1, m1, n2, m2;
    scanf("%d %d", &n1, &m1);
    int A[n1][m1];
    for(int linha = 0; linha < n1; linha++){
        for(int coluna = 0; coluna < m1; coluna++){
            scanf("%d", &A[linha][coluna]);
        }
    }
    scanf("%d %d", &n2, &m2);
    int B[n2][m2];
    for(int linha = 0; linha < n2; linha++){
        for(int coluna = 0; coluna < m2; coluna++){
            scanf("%d", &B[linha][coluna]);
        }
    }
    if (m1!=n2)
    {
        printf("Nao e possivel multiplicar\n");
        return 0;
    }
    for(int linha = 0; linha < n1; linha++){
        for(int coluna = 0; coluna < m2; coluna++){
            int soma = 0;
            for (int i = 0; i < m2; i++)
            {
                soma+= A[linha][i]*B[i][coluna];
            }
            printf("%d ", soma);
        }
        putchar('\n');
    }
    

    return 0;
}