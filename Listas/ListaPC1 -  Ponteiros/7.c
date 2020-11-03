#include <stdio.h>
#include <stdlib.h>
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
#define true 1
#define false 0

void min_max(int *v, int n, int *l, int *r){
    *l = 0; *r = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > v[*r])
            *r = i;
        if (v[i] < v[*l])
            *l = i;
    }
}
int main(void){
    int vet[] = {7, 7, 1, 2, 0, 6};
    int n = 6;
    int min, max;
    min_max(vet, n, &min, &max);
    showi(min);
    showi(max);
    return 0;
}