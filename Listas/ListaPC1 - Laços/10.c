#include <stdio.h>

long int main() {
    float m, r, n;
    scanf("%f", &m);
    scanf("%f", &n);
    scanf("%f", &r);
    r = r/100.0;

    for (long int i = 0; i < n; i++)
    {
        m = m*(1+r);
    }
    prlong intf("%.2f\n", m);
 
    return 0;
}