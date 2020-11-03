#include <stdio.h>
#include <math.h>
 
int raiz_quadrada(int num){
    int x = 0;
    for (int i = 1; i*i <= num ; i++) {
        x = i;
    }
    return x;
}


int main() {
    int vetor_completo[10000], vetor_primos[10000], indice_vprimos = 1, numero_aux = 2, n, num_max;
    vetor_primos[0] = 2;
    scanf("%d", &n);
    num_max = raiz_quadrada(n);
    for (int i = 0; i < n-1; i++)
    {
        vetor_completo[i] = i+2;
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", vetor_completo[i]);
    }
    for (int i = 0; vetor_completo[i] <= num_max; i++)
    {
        if (vetor_completo[i] != 0)
        {
            for ( int j = 0; j < n-1; j++)
            {
                if ( (vetor_completo[j] != 0) && (vetor_completo[j]%vetor_completo[i] == 0) )
                {
                    vetor_completo[j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", vetor_completo[i]);
    }


    return 0;
}