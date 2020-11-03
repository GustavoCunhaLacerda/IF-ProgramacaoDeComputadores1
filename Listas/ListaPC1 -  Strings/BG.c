#include <stdio.h>
#include <string.h>

int main()
{
    char texto[1003];
    fgets(texto, 1003, stdin);
    int i = 0, tam = strlen(texto), count;

    while(i < tam-1)
    {
        count=1;
        for(int j = i; texto[j] == texto[j+1]; j++)
        {
            count++;
        }

        if (count == 1)
        {
            printf("%c", texto[i]);
        }
        else
        {
            printf("%d%c", count, texto[i]);   
        }
        i+=count;
    }
    printf("\n");
    
    return 0;
}
