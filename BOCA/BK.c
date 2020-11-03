#include <stdio.h>
#include <string.h>


int main()
{
    char texto[100003], proxTexto[100003], count;
    texto[0] = '1';
    texto[1] = '\0';
    int i = 0, tam = strlen(texto);
    int indiceAux;
    int n;
    scanf("%d", &n);
    for (int l = 0; l < n-1; l++)
    {
        i = 0;
        tam = strlen(texto);
        indiceAux = 0;
        while(i < tam)
        {
            count='1';
            for(int j = i; texto[j] == texto[j+1]; j++)
            {
                (int)count++;
            }

            if (count == '1')
            {
                proxTexto[indiceAux] = '1';
                indiceAux++;
                proxTexto[indiceAux] = texto[i];
                indiceAux++;
            }
            else
            {  
                proxTexto[indiceAux] = (char)count;
                indiceAux++;
                proxTexto[indiceAux] = texto[i];
                indiceAux++;
            }
            i+=(int)count - 48;
            //printf("i:%d \n", i);
        }
        proxTexto[indiceAux] = '\0';
        strcpy(texto, proxTexto);
    }
    puts(texto);
    
    
    return 0;
}