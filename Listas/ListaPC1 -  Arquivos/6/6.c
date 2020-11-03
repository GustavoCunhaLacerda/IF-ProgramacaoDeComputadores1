#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // vars e ponteiros
    FILE *arq = fopen(argv[1], "r");
    char *str = malloc(1000*sizeof(char));
    float preco_total = 0, preco_individual;

    // checa a abertura dos arquivos
    if (arq == NULL) {
        puts("Nao foi possivel abrir os arquivos.");
        exit(0);
    }

    // extraçao de infos do arquivo de entrada
    // <40> -> codigo ascii para o espaço
    // o arquivo de entrada deve conter o formato <nome_produto>+<esp>+<valor>
    while (fscanf(arq, "%[^\40]s", str) != EOF) {
        fscanf(arq, "%f", &preco_individual);
        preco_total += preco_individual;
    }

    // output dos dados
    printf("Valor total da compra = %.2f\n", preco_total);
    
    // liberacao da memoria
    free(str);
    fclose(arq);

    return 0;
}
