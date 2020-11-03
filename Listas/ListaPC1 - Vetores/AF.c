#include <stdio.h>

long int main() {
    long int fib[100000], i[100000], j[100000], n;
    long int maior = 0;
    fib[0] = 1;
    fib[1] = 1;
    scanf("%ld", &n);
    for (long int a = 0; a < n; a++)
    {
        scanf("%ld %ld", &i[a], &j[a]);
        if (j[a] > maior) maior = j[a];
    }
    for (long int b = 2; b <= 46; b++)
    {
        fib[b] = fib[b-1]+fib[b-2];
    }
    for (long int l = 0; l < n; l++)
    {
        long int soma = 0;
        for (long int k = i[l]; k <= j[l]; k++)
        {
            soma += fib[k];
        }
        printf("%ld\n", soma);

    }
    
    
    
    return 0;
}