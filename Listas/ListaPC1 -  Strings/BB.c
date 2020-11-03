#include <stdio.h>

int main()
{
    char bin[100];
    int len = 0, soma = 0, pot = 1;

    fgets(bin, 100, stdin);

    for (int i = 0; bin[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        pot = 1;
        if ( bin[i] == '1' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 2; 
            }
            soma+=pot;
        }
    }
    printf("%d\n", soma);
    
    
    
    return 0;
}
