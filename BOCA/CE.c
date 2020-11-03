#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[1002][1002];
    int n, qteDiagonais, maior, maiorI, soma = 0;
    scanf("%d", &n);
    qteDiagonais = (2*n) -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
            // printf("(%d,%d) ", i, j);
        }
        // puts("");
    }
    for (int q = -(n-1); q < (n); q++)
    {
        //printf("%d: ", q);
        for (int linha = 0; linha < n-abs(q); linha++)
        {
            if (linha-q > linha)
            {
            //    printf("(%d,%d) ", linha-q, linha);
                soma+= matriz[linha-q][linha];
            }
            else
            {
            //    printf("(%d,%d) ", linha, linha+q);
               soma+= matriz[linha][linha+q];
            } 
        }
        if (soma > maior || q == -(n-1))
        {
            maior  = soma;
            maiorI = q;
        }
        soma = 0;
        
        // puts("");
        
    }
    printf("%d %d\n", maiorI, maior);
    


    
    return 0;
}
