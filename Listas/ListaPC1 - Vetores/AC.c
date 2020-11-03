#include <stdio.h>

int main(int argc, char const *argv[])
{
    float vetor1[100000], vetor2[100000], produto, somatorio_res = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &vetor1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &vetor2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        somatorio_res += vetor1[i]*vetor2[i];
    }

    printf("%f\n", somatorio_res);
    
    
    return 0;
}
