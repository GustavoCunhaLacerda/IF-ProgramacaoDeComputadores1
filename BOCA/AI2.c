#include <stdio.h>

int main() {
    int grau, q;
    double ai[6], x[100000];

    scanf("%d", &grau);
    for (int i = 0; i < grau+1; i++)
    {
        scanf("%lf", &ai[i]);
    }

    scanf("%d", &q);

    for (int i = 0; i < q; i++)
    {
        scanf("%lf", &x[i]);
    }

    for (int i = 0; i < q; i++)
    {
        double soma = 0, pot;
        for (int j = 0; j < grau+1; j++)
        {
            pot = 1;
            for (int p = 0; p < j; p++)
            {
                pot *= x[i];
            }
            soma+= pot*ai[j];
        }
        printf("%lf\n", soma);  
    }
    
    
    

    return 0;
}