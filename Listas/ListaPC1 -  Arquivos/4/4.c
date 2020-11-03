#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// prototipos
int conta_palavras(char *str, int tam);

int main(int argc, char const *argv[])
{
    // ponteiros
    FILE *arq = fopen(argv[1], "r");
    char *linha = malloc(1000*sizeof(char));

    // checa a abertura dos arquivos
    if (arq == NULL) {
        puts("Nao foi possivel abrir os arquivos.");
        exit(0);
    }

    // alg de coleta de dados
    int linhas = 0, caracteres = 0, palavras = 0;
    while(fgets(linha, 1000, arq) != NULL) {
        caracteres += strlen(linha);
        palavras += conta_palavras(linha, caracteres);
        linhas++;
    }

    // output dos dados coletados
    printf("Palavras = %d\n", palavras);
    printf("Linhas = %d\n", linhas);
    printf("Caracteres = %d\n", caracteres);
    
    // liberacao de memoria
    fclose(arq);
    free(linha);
    
    return 0;
}

// implementacoes
int conta_palavras(char *str, int tam) {
    int palavras = 0;

    int i = 1;
    while (1) {
        if ( ((int)str[i] >= 32 && (int)str[i] <= 47) || ((int)str[i] >= 58 && (int)str[i] <= 64) || ((int)str[i] >= 91 && (int)str[i] <= 96) || ((int)str[i] >= 123 && (int)str[i] <= 127)  || (str[i] == '\0') || (str[i] == '\n') ) {
            if ( ((int)str[i-1] >= 65 && (int)str[i-1] <= 90) || ((int)str[i-1] >= 97 && (int)str[i-1] <= 122) )
                palavras++;
        }
        i++;
        if (str[i-1] == '\0')
            return palavras;
    }
    
}
