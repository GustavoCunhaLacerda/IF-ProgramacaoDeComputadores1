#include <stdio.h>
int main()
{
    int QuantidadeDeParesNecessarios = 0, QuantidadeDePares = 0;
    int ParesCount[127];
    char str[100002];

    fgets(str, 100002, stdin);
    for (int i = 0; i < 127; i++)
    {
        ParesCount[i] = 0;
    }
    for (int i = 0; str[i] != '\n'; i++)
    {
        if ( str[i] != '*') ParesCount[(int)str[i]] +=1;
        str[i] = '*';
        QuantidadeDeParesNecessarios++;
    }
    for (int i = 0; i < 127; i++)
    {
        QuantidadeDePares += ParesCount[i]/2;
    }
    //printf("%d %d\n", QuantidadeDePares, QuantidadeDeParesNecessarios/2);
    if (QuantidadeDePares >= QuantidadeDeParesNecessarios/2)
    {
        puts("Sim");
    }
    else
    {
        puts("Nao");
    }
    
    
    
    
    return 0;
}
