#include <stdio.h>
#include <stdlib.h>

// prototipos
void sort_simples(int *vet, int n);

int main(int argc, char const *argv[])
{
    int tamanho_total = 0;
    int *vet_total= malloc(sizeof(int));

    // ponteiros pros arquivos
    FILE *arq1 = fopen(argv[1], "rb");
    FILE *arq2 = fopen(argv[2], "rb");
    FILE *arq3 = fopen(argv[3], "wb");

    // checa a abertura dos arquivos
    if (arq1 == NULL || arq2 == NULL || arq3 == NULL) {
        puts("Nao foi possivel abrir os arquivos.");
        exit(1);
    }
    
    int indice = 0; // indice do vetor contendo os dados dos arquivos
    // leitura dos dados do arquivo 1
    while(fread(&vet_total[indice], sizeof(int), 1, arq1) != 0) {
        indice++;
        tamanho_total++;
        vet_total = realloc(vet_total, sizeof(int)*(tamanho_total + 1));
    }
    // leitura dos dados do arquivo 2
    while(fread(&vet_total[indice], sizeof(int), 1, arq2) != 0) {
        indice++;
        tamanho_total++;
        vet_total = realloc(vet_total, sizeof(int)*(tamanho_total + 1));
    }

    // ordenacao dos dados
    sort_simples(vet_total, tamanho_total);

    // escrita dos dados ordenados no arquivo
    fwrite(&vet_total[0], sizeof(int), tamanho_total, arq3);
    fclose(arq3); // fecha arq3 apos escrita

    // checa a ordenacao
    FILE *arq = fopen("arq3.bin", "rb");
    int aux;
    while(fread(&aux, sizeof(int), 1, arq) != 0) {
        printf("%d\n", aux);
    }

    // liberacao de ponteiros
    free(vet_total);
    fclose(arq);
    fclose(arq1);
    fclose(arq2);

    return 0;
}

void sort_simples(int *vet, int n) {
    int swap;
    for (int i = 0; i < n; i++) {
        for (int j = i, aux = i; j >= 0; j--) {
            if (vet[aux] < vet[j]) {
                swap = vet[aux];
                vet[aux] = vet[j];
                vet[j] = swap;
                aux = j;
            }
        }
    }
}
