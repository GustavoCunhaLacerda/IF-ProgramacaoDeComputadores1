#include <stdio.h>
#define false 0
#define true 1


int main()
{
    int n, xaux, yaux;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++)
    {
        int a,b,c,x,y,z, res = false;
        scanf("%d %d %d", &a, &b, &c);
        int limite = c;
        for ( x = -300; x <= 300; x++)
        {
            for ( y = -300; y <= 300; y++)
            {
                if ((a-y-x)*y*x == b)
                {
                    if ( ((a-y-x)*(a-y-x)) + (y*y) + (x*x) == c)
                    { 
                        z = a - y - x; 
                        if ( (xaux != y && xaux != x && xaux!= z) || res == false  )
                        {
                            printf("%d %d %d\n", x, y, z);
                            res=true;
                        }
                        xaux = x;
                    }
                } 
            }
        }
        if (res == false)
        {
            printf("Sem solucao\n");
        }
    }

    return 0;
}
