#include <stdio.h>
#include <stdlib.h>

char* getline(void)
{
    char *str = malloc(1 * sizeof(char)), c;
    int tam = 1;

    do (c = getchar())
    {
        str[tam - 1] = c;
        tam++;
        str = realloc(str, tam * sizeof(char));
    }while (c != '\n')

    return str;
}

int main()
{
    printf("%s", getline());

    return 0;
}