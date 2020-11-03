#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int ulli;

ulli pot_facil(ulli x, ulli n) {
    if (n == 0) return 1;
    return x*pot_facil(x, n-1);
}

ulli pot_eficiente(ulli x, ulli n) {
    if (n == 0) return 1;
    if (n % 2 == 1)
        return x*pot_eficiente(x, (n-1) >> 1)*pot_eficiente(x, (n-1) >> 1);
    return pot_eficiente(x, n >> 1)*pot_eficiente(x, n >> 1);
}

int main() {
    ulli x, n;
    scanf("%lld %lld", &x, &n);

    printf("%lld\n", pot_facil(x, n));
    printf("%lld\n", pot_eficiente(x, n));

    return 0;
}