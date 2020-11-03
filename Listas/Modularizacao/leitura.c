#include <stdio.h>
#include "leitura.h"

void le_vetor(int vetor[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("vetor[%d] = ",i);
        scanf("%d",&vetor[i]);
    }