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
void troca(int *i, int *j){
    int tmp;
    tmp = *i;
    *i = *j;
    *j = tmp;
}
int main(void){
    int x, *p, y;
    x = 100;
    y = 1;
    p = &x;
    showi(*p);
    printf("\n");
    showi(x);
    showi(y);
    troca(&x, &y);
    showi(x);
    showi(y);

    return 0;
}