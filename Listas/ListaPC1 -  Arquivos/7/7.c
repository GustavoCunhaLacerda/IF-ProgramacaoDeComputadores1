#include <stdio.h>
#include <stdlib.h>

// tipo aluno
typedef struct Aluno {
    char  nome[30];     // nome do aluno
    int   sem;          // semestre do aluno
    float rendimento;   // rendimento do aluno
} aluno;

int main(int argc, char const *argv[])
{
    // vars e ponteiros
    FILE *arq = fopen(argv[1], "r");
    int quantidade_alunos = 0;

    // checa a abertura dos arquivos
    if (arq == NULL) {
        puts("Nao foi possivel abrir os arquivos.");
        exit(0);
    }

    // vetor de alunos do tipo aluno
    aluno *alunos = malloc(sizeof(aluno));

    // leitura dos dados de cada aluno
    while (fgets(alunos[quantidade_alunos].nome, 30, arq) != NULL) {
        fscanf(arq, "%d", &alunos[quantidade_alunos].sem);
        fscanf(arq, "%f", &alunos[quantidade_alunos].rendimento);
        
        fgetc(arq); // leitura do \n
        fgetc(arq); // pula uma linha de separacao dos dados

        quantidade_alunos++;
        alunos = realloc(alunos, sizeof(aluno) * (quantidade_alunos+1));
    }

    int sem, quantidade_no_sem = 0;
    scanf("%d", &sem); // input semestre

    // informa alunos que estao no mesmo semetre do input
    printf("Alunos do %dº semestre:\n\n", sem);

    for (int i = 0; i < quantidade_alunos; i++) {
        if (alunos[i].sem == sem) {
            printf("%s", alunos[i].nome);
            printf("Rendimento = %.2f\n\n", alunos[i].rendimento);
            quantidade_no_sem++;
        }
    }

    // informa que nao ha alunos no sem desejado caso necessario
    if (quantidade_no_sem == 0) printf("Nao ha alunos no %dº semestre\n", sem);

    // liberacao de memoria
    fclose(arq);
    free(alunos);
    return 0;
}
