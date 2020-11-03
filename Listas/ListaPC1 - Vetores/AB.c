#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    float desvio=0, media, soma=0;
    float notas[100000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &notas[i]);
        soma+= notas[i];
    }
    media = soma/n;

    for (int i = 0; i < n; i++)
    {
        desvio += (media - notas[i])*(media - notas[i]);
    }
    desvio = desvio/n;

    desvio = sqrt(desvio);

    printf("%f\n", desvio);
    
    






    return 0;
}
