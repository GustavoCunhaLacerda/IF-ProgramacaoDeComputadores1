#include <stdio.h>
#include <string.h>

// algoritmo de compressão
void compress(char *str, int janela)
{
    // vars
    int indiceCodif = 0, i = 0, j;
    // infos de compressão
    char letrasF;
    int distancias, tamanhos;

    for (int pos = 0; str[pos] != '\0'; pos++)
    {
        if(str[pos] == '\n') str[pos] = '\0';
    }
    int count = 0;
    while( i<strlen(str) && count < 5)
    {
        int dist = 0;
        // primeiro caractere de características fixas (-1, 0, <char>)
        if(i == 0){
            distancias = -1;
            letrasF = str[0];
            tamanhos = 0;

            printf("(%d,%d,%c)", distancias, tamanhos, letrasF);
            
            indiceCodif++;
            i++;
        }
        // atualização da janela de compressão
        if (i < janela) dist = i;
        else dist = janela;
        
        // var para auxílo na compressão
        int tam = 0;
        int tam_aux = 0;
        int dist_aux = 0;
        int jAux = 0;
        // compressão
        for (;dist>0;dist--)
        {   
            tam_aux = 0;
            for ( j = i - dist;  j < strlen(str); j++){
                if(str[j] != str[j+dist]) break;
                tam_aux++;
            }
            // mudando as informações de compressão se o houver um caso melhor/mais eficiente
            if (tam<tam_aux || (tam == tam_aux && dist < dist_aux))
            {
                jAux = j-1;
                tam = tam_aux;
                dist_aux = dist;
            }
        }
        // salvamento das informações da str comprimida
        if(tam == 0 && dist_aux == 0) {
            letrasF = str[i];
            tamanhos = 0;
            distancias = 0;

            // atualização do i
            i++;
        }
        else {
            letrasF = str[jAux+dist_aux+1];
            tamanhos = tam;
            distancias = dist_aux;

            // atualização do i
            i = jAux+dist_aux+2;
        }

        if (letrasF == '\0') printf("(%d,%d,\\0)", distancias, tamanhos);
        else printf("(%d,%d,%c)", distancias, tamanhos, letrasF);
    }

    // se não possuir o \0 colocar no final
    if (letrasF != '\0') printf("(0,0,\\0)");
    
    // quebra de linha final
    putchar('\n');
}