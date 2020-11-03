#include <stdio.h>

int main() {
    int N, notas, j, notas100, notas50, notas25, notas10, notas5, notas2, notas1;
    scanf("%d", &j);
    for (int i = 0; i < j; i++)
    {
        scanf("%d", &N);

        notas100 = N/100;
        N = N%100;

        notas50 = N/50;
        N = N%50;

        notas25 = N/25;
        N = N%25;

        notas10 = N/10;
        N = N%10;

        notas5 = N/5;
        N = N%5;

        notas2 = N/2;
        N = N%2;

        notas1 = N/1;
        N = N%1;

        notas = notas1+notas2+notas5+notas10+notas25+notas50+notas100;
        printf("%d notas\n", notas);
    }
    return 0;
}