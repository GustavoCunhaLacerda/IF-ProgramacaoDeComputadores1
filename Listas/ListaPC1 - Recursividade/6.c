#include <stdio.h>
#include <stdlib.h>

int catalan(int n) {
    if (n == 0) 
        return 1;
    return catalan(n-1) * (4*n - 2) / (n + 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", catalan(n));
    return 0;
}