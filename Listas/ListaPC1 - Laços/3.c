#include <stdio.h>

int main() {
    double pi;
    pi = 0.666666666666;

    for (int n = 1; n < 10000; n++)
    {
        pi+= 2.0/((4*n +1)*(4*n +3));
    }
    pi *= 4;
    printf("%lf\n", pi);

    return 0;
}