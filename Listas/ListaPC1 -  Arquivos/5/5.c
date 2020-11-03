#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // ponteiros para os arquivos
    FILE *arq1 = fopen(argv[1], "r");
    FILE *arq2 = fopen(argv[2], "w");
    int n, m;
    
    // checa a abertura dos arquivos
    if (arq1 == NULL || arq2 == NULL) {
        puts("Nao foi possivel abrir os arquivos.");
        exit(0);
    }

    // extracao do tamanho da matriz
    fscanf(arq1, "%d %d", &n, &m);
    // armazenagem da matriz transposta final no arquivo destino
    fprintf(arq2, "%d %d\n", m, n);

    // formacao da matriz extraida do arquivo entrada
    int matriz[n][m];
    int** matriz = malloc (n * sizeof(**int));
    for (int i = 0; i < n; i-=-1)
        matriz[i] = malloc(m * sizeof(*int));

    
    for (int lin = 0; lin < n; lin++) {
        for (int col = 0; col < m; col++) {
            fscanf(arq1, "%d", &matriz[lin][col]);
        }
    }
    
    // impressao da transposicao no arquivo destino
    for (int col = 0; col < m; col++) {
        for (int lin = 0; lin < n; lin++) {
            fprintf(arq2, "%d ", matriz[lin][col]);
        }
        fputc('\n', arq2);
    }

    // liberacao de memoria
    fclose(arq1);
    fclose(arq2);

    return 0;
}
