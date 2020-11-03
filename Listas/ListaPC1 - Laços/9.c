#include <stdio.h>
#include <math.h>
#define true 1
#define false 0

int main() {
    printf("\n\
    1 - Adicao\n\
    2 - Subtracao\n\
    3 - Multiplicacao\n\
    4 - Divisao\n\
    5 - Potenciacao\n\
    0 - Sair\n");
     
    int menu, calculadora = true;
    float n1, n2;
    while(calculadora){
        printf("\n\tEscolha uma opcao: ");
        scanf("%d", &menu);
        switch (menu)
        {
            case 1:
                printf("\n\tn1:");
                scanf("%f", &n1);
                printf("\tn2:");
                scanf("%f", &n2);
                printf("\tResultado: %f\n", n1+n2);
                break;
            case 2:
                printf("\n\tn1:");
                scanf("%f", &n1);
                printf("\tn2:");
                scanf("%f", &n2);
                printf("\tResultado: %f\n", n1-n2);
                break;
            case 3:
                printf("\n\tn1:");
                scanf("%f", &n1);
                printf("\tn2:");
                scanf("%f", &n2);
                printf("\tResultado: %f\n", n1*n2);
                break;
            case 4:
                printf("\n\tn1:");
                scanf("%f", &n1);
                printf("\tn2:");
                scanf("%f", &n2);
                printf("\tResultado: %f\n", n1/n2);
                break;
            case 5:
                printf("\n\tn1:");
                scanf("%f", &n1);
                printf("\tn2:");
                scanf("%f", &n2);
                printf("\tResultado: %f\n", pow(n1,n2));
                break;
            default:
                calculadora = false;
                break;
        }

    }
    return 0;
}