#include <stdio.h>

int fatorial(int k);

int main() {
    int n;
    float e = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        e+= 1.0/fatorial(i);
    }
    printf("%f\n", e);
    
    return 0;
}

int fatorial(int k){
    if (k == 0 || k == 1) return 1;
    return k*fatorial(k-1);
}