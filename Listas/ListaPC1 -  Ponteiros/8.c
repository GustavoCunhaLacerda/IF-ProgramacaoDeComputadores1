#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// macros 
#define showd(x) printf("%s -> %d\n", #x, x);
#define showf(x) printf("%s -> %f\n", #x, x);
#define shows(x) printf("%s -> %s\n", #x, x);
#define showlf(x) printf("%s -> %lf\n", #x, x);
// typedefs
typedef unsigned int uint;
typedef long int lint;
typedef long long int llint;
typedef unsigned long long int ulli;
// bool simulation
typedef int bool;
#define true 1
#define false 0

char calcula_situacao(double* v, int n, double* media){
    *media = 0;
    for (int i = 0; i < n; i++)
    {
        (*media)+=v[i];
    }
    *media /= (double)n;
    if (*media < 6)
        return 'R';
    else 
        return 'A';
}


int main(void){
    double notas[] = {1.0, 7.0, 8.4};
    double media;
    printf("%c\n", calcula_situacao(notas, 3, &media));
    showd(media);

    return 0;
}