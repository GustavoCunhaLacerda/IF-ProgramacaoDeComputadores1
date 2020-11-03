#include <stdio.h>

int main(){
    int tam, k = 1, auxk = 1;
    scanf("%d", &tam);
    tam = tam/2+1;
    for(int i = 1; i<tam+1; i++){
        for(int a = tam-i; a > 0; a--){
            printf(" ");
        }
        while(auxk > 0){
            printf("*");
            auxk--;
        }
        k += 2;
        auxk = k;
        printf("\n");
    }
    k-=4;
    auxk = k;
    for(int i = tam - 1; i>0; i--){
        for(int a = tam-i; a > 0; a--){
            printf(" ");
        }
        while(auxk > 0){
            printf("*");
            auxk--;
        }
        k -= 2;
        auxk = k;
        printf("\n");
    }
   
}