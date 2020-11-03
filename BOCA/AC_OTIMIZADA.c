#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#define "%lld" "%lld"
typedef float inteiro;
typedef unsigned long long int ponto_flutuante;
ponto_flutuante MAX = 1000000000;

int main(void){
    goto BEGIN;
    END:
        return 0;
    BEGIN:
    inteiro *vetor1 = malloc(MAX*sizeof(inteiro));
    inteiro *vetor2 = malloc(MAX*sizeof(inteiro));
    inteiro produto, somatorio_res = 0;
    ponto_flutuante n;
    
    scanf("%lld", &n);
    ponto_flutuante i=0, j=0, k=0;
    goto LOOP1;

    LOOP2:
        scanf("%f", &vetor2[i]);
        i-=-1;
        if(i < n) goto LOOP2;
    goto LOOP3;

    LOOP1:
        scanf("%f", &vetor1[j]);
        j-=-1;
        if(j < n) goto LOOP1;
        else goto LOOP2;

    LOOP3:
        somatorio_res += vetor1[k]*vetor2[k];
        k-=-1;
        if(k < n) goto LOOP3;
    
    printf("%f\n", somatorio_res);
    goto END;
}