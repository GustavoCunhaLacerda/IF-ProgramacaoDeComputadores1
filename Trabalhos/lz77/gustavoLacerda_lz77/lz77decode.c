#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decompress(char *compressed_str){
    // vars de informações de descompressão
    int distancia = 0, tamanho = 0, aux_pos = 0;
    char letra_final = '\0';

    // infos da string final descomprimida
    char *str = NULL;
    int tam_str_final = 2;
    str = malloc(tam_str_final*sizeof(char)); 

    // Algoritmo de descompressao
    while (*compressed_str)
    {
        if (*compressed_str == '(')
        {
            // Distancia
            compressed_str++;

            if (*compressed_str == '-') 
                distancia=-1;
            else 
                distancia = atoi(compressed_str);
        
            // Tamanho
            while (*compressed_str != ',')
                compressed_str++;
            compressed_str++;
            tamanho = atoi(compressed_str);
            
            tam_str_final+=tamanho+1;
            str = realloc(str, tam_str_final*sizeof(char));

            // Letra Final
            while (*compressed_str != ',')
                compressed_str++;
            compressed_str++;

            if(*compressed_str == '\\' && *(compressed_str+1) == '0')
                letra_final = '\0';
            else
                letra_final = *compressed_str;
            
            for (int k = aux_pos-distancia, tam_aux = 0; tam_aux < tamanho; k++, tam_aux++)
            {
                str[aux_pos] = str[k];
                aux_pos++;
            }

            if(letra_final == '\0')
                str[aux_pos] = '\0';
            else 
                str[aux_pos] = letra_final;
            aux_pos++;
        }
        compressed_str+=2;
    }
    // Impressão dos resultados
    puts(str);
    // Liberação do ponteiro
    free(str);
}