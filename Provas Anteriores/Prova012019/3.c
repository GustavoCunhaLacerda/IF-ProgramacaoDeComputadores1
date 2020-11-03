#include <stdio.h>
#include <string.h>

int main() {
    char T[1000], P[1000];
    fgets(P, 1000, stdin);
    fgets(T, 1000, stdin);
    int tamP = strlen(P);
    int tamT = strlen(T)-1;
    int j;

    for (int i = 0; i < tamP; i++)
    {
        for (j = 0; j+i < tamP && j < tamT && T[j] == P[j+i]; j++);
        if (j == tamT)
        {
            printf("%d ", i);
        }
    } 
    printf("\n");
    
    return 0;
}