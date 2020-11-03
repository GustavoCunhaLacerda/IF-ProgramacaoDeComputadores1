#include <stdio.h>
#include <stdlib.h>

int MDC(int a, int b){
    if (b == 0)
        return a;
    return MDC(b, a%b);
}

int MMC (int a, int b) {
    return a*b / MDC(a, b);
}


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", MMC(a,b));
    
    return 0;
}