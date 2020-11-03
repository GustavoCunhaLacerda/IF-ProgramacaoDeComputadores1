#include <stdio.h>
#define true 1
#define false 0

int main() {
    int vetor[10000], n, divisor, numero = 3, primo, indice = 1;
    vetor[0] = 2;
    scanf("%d", &n);

    while (indice < n)
    {
        primo = true;
        divisor = 2;
        while (divisor < primo && primo != false) {
            if (numero%divisor == 0) {
                primo = false;
            }
            divisor++;
        }
        if (primo == true)
        {
            vetor[indice] = numero;
            indice++;
        }
        numero++;
        }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

 
    return 0;
}