#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[90];
    int textoDecimal[100000], k, n, tam, tamAux = 0, numAux;

    scanf("%i", &n);
    scanf("%i", &k);
    getchar();
    for (int j = 0; j < n; j++)
    {
        fgets(texto, 90, stdin);

        for (int i = 0; texto[i] != '\0'; i++)
        {
            if (texto[i] == '\n') textoDecimal[i + tamAux] = ((int)texto[i]);
            else
            {
                numAux = ((int)texto[i]);
                for (int a = 0; a > -k; a--)
                {
                    numAux -= 1;
                }
                textoDecimal[i + tamAux] = numAux;
                if (textoDecimal[i + tamAux] < 32) textoDecimal[i + tamAux] += 95;
            }

        }

        tam = strlen(texto);
        tamAux += tam;
    }

    for (int i = 0; i < tamAux; i++) printf("%c", textoDecimal[i]);

    return 0;
}