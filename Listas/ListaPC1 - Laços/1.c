#include <stdio.h>

int main(){
    int maior, segundo_maior, menor, segundo_menor, num, n;

    scanf("%d", &n);

    if (n!=0)
    {
        scanf("%d", &num);
    }
    maior = num;
    menor = num;

    int smaior_aux = 0, smenor_aux = 0;
    
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d", &num);
        if (i == smaior_aux && maior!=num) {
            segundo_maior = num;
        }
        else
        {
            smaior_aux++;
        }
        
        if (i == smenor_aux&&menor!=num)
        {
            segundo_menor = num;    
        }
        else
        {
            smenor_aux++;
        }
        
        

        if (num > maior)
        {
            segundo_maior = maior;
            maior = num;
        }
        else if( num > segundo_maior ){
            segundo_maior = num;
        }
        if (num < menor)
        {
            segundo_menor = menor;
            menor = num;
        }
        else if( num < segundo_menor ){
            segundo_menor = num;
        }
    }
    if (n <= 0)
    {
        printf("nao definido\nnao definido\nnao definido\nnao definido\n");
    }
    else if (n == 1)
    {
        printf("%d\nnao definido\n%d\nnao definido\n", maior, menor);
    }
    else
    {
        printf("%d\n", maior);
        printf("%d\n", menor);
        if (segundo_maior == maior)
        {
            printf("nao definido\n");
        }
        else
        {
            printf("%d\n", segundo_maior);
        }
        if (segundo_menor == menor)
        {
            printf("nao definido\n");
        }
        else
        {
            printf("%d\n", segundo_menor);
        }
        
    }
    

    return 0;

}