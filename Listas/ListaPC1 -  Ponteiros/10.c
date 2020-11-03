#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// macros 
#define showi(x) printf("%s -> %d\n", #x, x);
#define showf(x) printf("%s -> %f\n", #x, x);
#define shows(x) printf("%s -> %s\n", #x, x);
#define showd(x) printf("%s -> %lf\n", #x, x);
// typedefs
typedef unsigned int uint;
typedef long int lint;
typedef long long int llint;
typedef unsigned long long int ulli;
// bool simulation
typedef int bool;
#define true 1
#define false 0

void push_back(int* v,int* n,int* capacidade,int valor){
    if ((*n) == (*capacidade))
    {
        (*capacidade)*=2;
        v = realloc( v, (*capacidade) * sizeof(int));
    }
    v[(*n)] = valor;
    (*n)++;
}

void print(int* v,int n){
    for(int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    putchar('\n');
}

int pop_back(int* v,int* n,int* capacidade){
    if ((float)*n / (float)*capacidade <= 1.0/4.0)
    {
        *capacidade/=2;
    }
    int ele = v[(*n)-1];
    (*n)--;
    return(ele);
}

int main(void){
    int n = 2, capacidade = 2;
    int *vet = malloc(2*sizeof(int));
    vet[0] = 0;
    vet[1] = 1;
    push_back(vet, &n, &capacidade, 2);
    push_back(vet, &n, &capacidade, 3);
    push_back(vet, &n, &capacidade, 4);
    push_back(vet, &n, &capacidade, 5);
    push_back(vet, &n, &capacidade, 6);
    push_back(vet, &n, &capacidade, 7);
    print(vet, n);
    showi(capacidade);
    showi(n);
    printf("%d\n", pop_back(vet, &n, &capacidade));
    print(vet, n);
    printf("%d\n", pop_back(vet, &n, &capacidade));
    print(vet, n);
    printf("%d\n", pop_back(vet, &n, &capacidade));
    print(vet, n);
    printf("%d\n", pop_back(vet, &n, &capacidade));
    print(vet, n);
    printf("%d\n", pop_back(vet, &n, &capacidade));
    print(vet, n);


    free(vet);
    return 0;
}