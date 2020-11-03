#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[10000][82];
    int n,k, numAux;
    scanf("%d %d", &n, &k);
    getchar();

    k*=-1;
    for (int i = 0; i < n; i++)
    {
        fgets(texto[i], 90, stdin);

        for (int j = 0; texto[i][j] != '\0'; j++)
        {
            numAux = (int)texto[i][j];
            if (numAux != '\n')
            {
                for (int a = 0; a > k; a--)
                {
                    numAux -= 1;
                    if (numAux == 31)
                    {
                        numAux += 95;
                    }
                }
                texto[i][j] = numAux;
                
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; texto[i][j] != '\0'; j++)
        {
            
            printf("%c", texto[i][j]);
        }
    }
    return 0;
}
