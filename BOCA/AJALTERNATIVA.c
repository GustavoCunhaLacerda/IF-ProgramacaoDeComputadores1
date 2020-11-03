#include <stdio.h>
#define true 1
#define false 0

// Primos Arrojados conseguidos com um algoritmo qua deu NO - Time limit exceeded
int PrimosArrojados[78] = {2, 3, 5, 7, 23, 29, 31, 37, 53, 59, 71, 73, 79, 233, 239, 293, 311, 313, 317, 373, 379, 593, 599, 719, 733, 739, 797, 2333, 2339, 2393, 2399, 2939, 3119, 3137, 3733, 3739, 3793, 3797, 5939, 7193, 7331, 7333, 7393, 23333, 23339, 23399, 23993, 29399, 31193, 31379, 37337, 37339, 37397, 59393, 59399, 71933, 73331, 73939, 233993, 239933, 293999, 373379, 373393, 593933, 593993, 719333, 739391, 739393, 739397, 739399, 2339933, 2399333, 2939999, 3733799, 5939333, 7393913, 7393931, 7393933};

// Busca binaria para encontrar o PrimoArrojado no vetor o mais rapido possivel, #trauma de NO - Time limit exceeded
int ePrimoArrojado(int chave, int N){  
    int inf,sup,meio;
    inf=0;
    sup=N-1;
    while (inf<=sup)
    {
        meio=(inf+sup)/2;
        if (chave==PrimosArrojados[meio])
            return true;
        else if (chave<PrimosArrojados[meio])
            sup=meio-1;
        else
            inf=meio+1;
    }
    return false;   // não encontrado 
}

int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ePrimoArrojado(num[i], 78) == false)
        {
            puts("N");
        }
        else
        {
            puts("S");
        }
        
        
    }
    
    return 0;
}
