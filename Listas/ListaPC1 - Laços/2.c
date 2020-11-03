#include <stdio.h>
int main(){
    double x;
    int n = 20;
    int k;
    double sinx = 0;
    double termo;
    scanf("%lf", &x);
    k = 1;
    termo = x;
    while (k < n) { 
        sinx +=  termo;
        k = k + 2;
        termo *= -(x * x) / ( (k-1) * k);
    }
    printf("%lf\n",sinx);
}