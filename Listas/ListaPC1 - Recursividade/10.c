#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibonacci(int n) {
    if(n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    char *word = malloc(1000);
    char *aux  = malloc(1000); 

    scanf("%d", &n);
    getchar();
    scanf("%[^\n]s", word);
    getchar();

    strcpy(aux, word);

    int it = fibonacci(n);
    printf("%d\n", it);

    for (int i = 0; i < it-1; i++)
        strcat(word, aux);

    puts(word);
    

    return 0;
}