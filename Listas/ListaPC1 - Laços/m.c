#include <stdio.h>
#define true 1
#define false 0

int main()
{
    int res = false;
    int A = 6, B = 6, C = 14;
    int x, y, z;
    for (x = 0; x<10000 && res == false; x++)
    {
        for ( y = 0; y<10000 && res == false; y++)
        {
            for ( z = 0; z < 10000 && res == false; z++)
            {
                if (x+y+z == A)
                {
                    if (x*y*z == B)
                    {
                        if ( ((x*x) + (y*y) + (z*z)) == C)
                        {
                            res = true;
                        }
                    }
                }  
            }
        }
    }

    printf("%d %d %d\n", x-1, y-1, z-1);
    
    
    
    return 0;
}
