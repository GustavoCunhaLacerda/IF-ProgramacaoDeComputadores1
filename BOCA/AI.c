#include <stdio.h>

int main() {
    int grau, q;
    float ai[7], x, res[1000000];

    scanf("%d", &grau);
    for (int i = 0; i < grau+1; i++)
    {
        scanf("%f", &ai[i]);
    }

    scanf("%d", &q);

    for (int i = 0; i < q; i++)
    {
        scanf("%f", &x);
        float soma = 0, pot;
        for (int j = 0; j < grau+1; j++)
        {
            pot = 1;
            for (int p = 0; p < j; p++)
            {
                pot *= x;
            }
            soma+= pot*ai[j];
        }
        res[i] = soma;
    }

    for (int i = 0; i < q; i++)
    {
        printf("%f\n", res[i]);
    }

    return 0;
}