#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char nome[81];
    int idade;
    int semestre;
    float renda;
} Aluno;

void imprime_alunos_msem(Aluno* alunos, int n, int sem) {
    int qte = 0;
    printf("Alunos do %d° sem:\n", sem);

    for (int i = 0; i < n; i++) {
        if (alunos[i].semestre == sem) {
            printf("%s\n", alunos[i].nome);
            qte++;
        }
    }
    if (qte == 0)
        printf("Nao ha alunos no %d° sem\n", sem);
}

void imprime_aluno_renda_maior(Aluno* alunos, int n, int sem) {
    float media = 0;
    int qte = 0;

    for (int i = 0; i < n; i++) {
        if (alunos[i].semestre == sem) {
            media += alunos[i].renda;
            qte++;
        }
    }

    if (qte == 0)
        printf("Nao ha alunos no %d° sem\n", sem);
    else {
        media /= qte;
        printf("Alunos com renda >= R$ %d:\n", media);
        for (int i = 0; i < n; i++) {
            if (alunos[i].renda >= media && sem == alunos[i].semestre)  {
                printf("%s\n", alunos[i].nome);
            }
        }
    }
}

void imprime_alunos_msidade(Aluno* alunos, int n, int idade) {
    printf("Alunos com %d anos:\n", idade);
    for (int i = 0; i < n; i++) {
        if (alunos[i].idade == idade)
            printf("%s\n", alunos[i].nome);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    
    Aluno *alunos = malloc(n * sizeof(Aluno));
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s", alunos[i].nome);
        getchar();
        scanf("%d", &alunos[i].idade);
        scanf("%d", &alunos[i].semestre);
        scanf("%f", &alunos[i].renda);
        getchar();
    }
    
    imprime_alunos_msem(alunos, n, 2);
    imprime_aluno_renda_maior(alunos, n, 6);
    
    return 0;
}
