#include <stdio.h>
#include <stdlib.h>

int main() {
    char cpf[16];
    fgets(cpf, 16, stdin);


    int i = 0, multiplicador = 10, soma1 = 0, soma2 = 0;

    while (multiplicador > 1)
    {
        if (cpf[i] != '.' && cpf[i] != '-')  {
            //printf("%c*%d ", cpf[i], multiplicador);
            soma1+= ((int)cpf[i]-48)*multiplicador;
            multiplicador--;
        }
        i++;
    }
    soma1*=10;
    soma1%=11;
    if (soma1 == 10) soma1 = 0;
    
    printf("\n");
    i=0;//
    multiplicador = 11;
    while (multiplicador > 1)
    {
        if (cpf[i] != '.' && cpf[i] != '-')  {
            //printf("%c*%d ", cpf[i], multiplicador);
            soma2+= ((int)cpf[i]-48)*multiplicador;
            multiplicador--;
        }
        i++;
    }
    soma2*=10;
    soma2%=11;
    if (soma1 == 10) soma1 = 0;


    if (soma1 == ((int)cpf[12]-48) && soma2 == ((int)cpf[13]-48)) printf("Válido\n");
    else printf("Inválido\n");    
    


    return 0;
}