#include <stdio.h>

int main(){
    int tam;
    scanf("%d", &tam);
    tam = tam/2+1;
    for(int i = 1; i<tam+1; i++){
        for(int k = i; k > 0; k--){
            printf("*");
        }
        printf("\n");
    }
    for(int i = tam-1; i>0; i--){
        for(int k = i; k > 0; k--){
            printf("*");
        }
        printf("\n");
    }
}