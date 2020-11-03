#include <stdio.h>

int main()
{
    char bin[1002];
    long int len = 0, soma = 0, pot = 1;

    if(fgets(bin, 1002, stdin));

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
                pot *= 16; 
            }
            soma+=pot;
        }
        if ( bin[i] == '2' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=2*pot;
        }
        if ( bin[i] == '3' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=3*pot;
        }
        if ( bin[i] == '4' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=4*pot;
        }
        if ( bin[i] == '5' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=5*pot;
        }
        if ( bin[i] == '6' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=6*pot;
        }
        if ( bin[i] == '7' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=7*pot;
        }
        if ( bin[i] == '8' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=8*pot;
        }
        if ( bin[i] == '9' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=9*pot;
        }
        if ( bin[i] == 'a' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *=16; 
            }
            soma+=10*pot;
        }
        if ( bin[i] == 'b' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=11*pot;
        }
        if ( bin[i] == 'c' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=12*pot;
        }
        if ( bin[i] == 'd' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=13*pot;
        }
        if ( bin[i] == 'e' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=14*pot;
        }
        if ( bin[i] == 'f' )
        {
            for (int j = i; j < len-2; j++)
            {
                pot *= 16; 
            }
            soma+=15*pot;
        }
    }
    printf("%ld\n", soma);
    
    
    
    return 0;
}
