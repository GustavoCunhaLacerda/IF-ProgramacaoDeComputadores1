#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// tipo boleano
typedef enum Bool {
    true = 1, false = 0
} bool;

// prototipos
void append(const char read[], const char write[]);

int main(int argc, char const *argv[]) {
    
    append(argv[1], argv[3]);
    append(argv[2], argv[3]);

    return 0;
}

// implementacoes
void append(const char read[], const char write[]) {
    FILE *r = fopen(read, "r");
    FILE *w = fopen(write, "a");
    char linha[1000];

    if (r == NULL || w == NULL) {
        puts("Nao e possivel abrir o arquivo");
        exit(0);
    }

    // fputc('\n', w);
    while(fgets(linha, 1000, r)) {
        fputs(linha, w);
    }

    fclose(r);
    fclose(w);
}