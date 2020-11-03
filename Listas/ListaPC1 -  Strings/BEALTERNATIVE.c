#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[10000][82];
    int n,k;
    scanf("%d %d", &n, &k);
    getchar();

    for (int i = 0; i < n; i++)
    {
        fgets(texto[i], 90, stdin);

        for (int j = 0; texto[i][j] != '\0'; j++)
        {
            for (int a = 0; a < k; a++)
            {
                if (texto[i][j] != '\n')
                {
                    texto[i][j] = (int)texto[i][j] + 1;
                    if ((int)texto[i][j] == 126)
                    {
                        texto[i][j] -= 95;
                    }
                }
                
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
