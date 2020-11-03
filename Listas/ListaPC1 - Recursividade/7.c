#include <stdio.h>
#include <stdlib.h>

// creditos: https://rosettacode.org/wiki/Ackermann_function

int ackermann(int m, int n)
{
    if (m == 0) 
        return n + 1;
    if (n == 0)
        return ackermann(m - 1, 1);
    return ackermann(m - 1, ackermann(m, n - 1));
}


int main()
{
    printf("%d\n", ackermann(1, 2));
    return 0;
}
