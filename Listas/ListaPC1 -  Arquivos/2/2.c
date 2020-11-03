#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    // vars e ponteiros
    int linhas = 1000, colunas = 1000, i;
    char texto[linhas][colunas];
    FILE *file;
    char nome_arquivo[] = "texto.txt";
    
    // extracao da informacao em texto
    file = fopen(nome_arquivo, "r");
    while(fgets(texto[i], colunas, file) != NULL) i++;
    fclose(file);

    // mudanca necessaria no texto
    for (int lin = 0; lin < i; lin++) {
        int tam_lin = strlen(texto[lin]);
        for (int col = 0; col < tam_lin; col++) {
            char c = texto[lin][col];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') texto[lin][col] = toupper(c);
        }
    }
    
    // reescrita do texto modificado no arquivo
    file = fopen(nome_arquivo, "w");
    for(int lin = 0; lin < i; lin++)
        fputs(texto[lin], file);
    fclose(file);
    

    return 0;
}