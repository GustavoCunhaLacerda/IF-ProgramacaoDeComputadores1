#include <stdio.h>
#include <string.h>

int main()
{
    char texto[82];
    if(fgets(texto, 82, stdin));

    int tam = strlen(texto)-2;
    int palindromo = 1;

    if (tam == 1)
    {
        if (texto[0]!=texto[1]) palindromo = 0;
    }
    else
    {
        for (int i = 0; i < tam/2; i++)
        {
            if (texto[i] != texto[tam-i]) palindromo = 0;
        }        
    }
    

    if (palindromo == 1) printf("S\n");
    else printf("N\n");
    
    
    return 0;
}
