#include <stdio.h>

void main(void)
{
    int n, acima_media[100000], acm = 0, dia_menor, dia_maior;
    float temperaturas[100000],menor, maior, media = 0.0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &temperaturas[i]);
        media+= temperaturas[i];
    }
    media /= (float)n;
    maior = temperaturas[0];
    menor = temperaturas[0];
    dia_maior = 0;
    dia_menor = 0;
    for (int i = 0; i < n; i++)
    {
        if (temperaturas[i] >= media)
        {
            acima_media[acm] = i;
            acm++;
        }
        if (temperaturas[i] > maior)
        {
            maior = temperaturas[i];
            dia_maior =i;
        }
        if (temperaturas[i] < menor)
        {
            menor = temperaturas[i];
            dia_menor = i;
        }
    }
    printf("%d %.1f\n", dia_menor, menor);
    printf("%d %.1f\n", dia_maior, maior);
    printf("%.1f\n", media);
    for (int i = 0; i < acm; i++)
    {
        printf("%d ", acima_media[i]);
    }
    printf("\n");
    
    




    
}
