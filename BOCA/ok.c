#include <stdio.h>

int main()
{
    int i = 0, valor, aux, notas[] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &valor);
    printf("%d\n", valor);
    while(i < 7)
    {
        if (valor >= notas[i])
        {
            aux = valor;
            valor = valor / notas[i];
            printf("%d nota(s) de R$ %i,00\n",valor, notas[i]);
            valor = aux - valor*notas[i];
        }
        else
        {
            printf("0 nota(s) de R$ %i,00\n", notas[i]);
        }
        i++;
    }
    
    return 0;
}
