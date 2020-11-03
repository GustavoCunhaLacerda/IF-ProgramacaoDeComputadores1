#include <stdio.h>

int main()
{
    int vetor[100000], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    
    
    return 0;
}
