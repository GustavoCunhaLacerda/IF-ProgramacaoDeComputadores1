#include <stdio.h>
#define true 1
#define false 0

int main()
{
    int PopstarMeta, n, popIndice, pop = 0, popAux=-1;
    scanf("%d", &n);
    PopstarMeta = n;
    int mapaConhecidos[1000][1000];
    int mapaAux[1002][1002];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mapaConhecidos[i][j]);
            mapaAux[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && mapaConhecidos[i][j] == 0)
            {
                mapaAux[i][j] = -1;
            }

            if (i!=j && mapaConhecidos[i][j] == 1) {
                mapaAux[i][i] = -1;
                //printf("a");          
            }
            if(mapaConhecidos[i][j] == 1 && mapaAux[j][j] != -1){
                mapaAux[j][j] += 1;
                //printf("b");
            }

        }
    }
    for (int i = 0; i < n; i++)
    {
        if (mapaAux[i][i] >= PopstarMeta)
        {
            pop = true;
            popIndice = i;
            if (popAux == mapaAux[i][i])
            {
                pop = false;
                break;
            }
            
            popAux = mapaAux[i][i];
        }  
    }
    if (pop == true)
    {
        printf("Popstar: aluno #%d\n", popIndice+1);
    }
    else
    {
        printf("Nao ha popstar.\n");
    }

    
    return 0;
}
