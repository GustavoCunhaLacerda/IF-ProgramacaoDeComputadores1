#include <stdio.h>
#include <math.h>

int main()
{
    int n, p1, p2;
    float menor_dist=0;
    float x[1000], y[1000];
	float dist_aux;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &y[i]);
    }
    menor_dist = sqrt( pow(x[0]-x[1],2) + pow(y[0]-y[1],2) );
    p1 = 0;
    p2 = 1;
    for (int i = 0; i < n; i++)
    {
     for (int j = 0; j < n; j++)
     {
        if (i!=j)
        {
			dist_aux = sqrt( pow(x[i]-x[j],2) + pow(y[i]-y[j],2) );
            if (dist_aux < menor_dist)
            {
                menor_dist = dist_aux;
                p1 = i;
                p2 = j;
            }  
        }
        
     }
          
    }
    printf("Pontos: %d e %d\nDistancia: %f\n", p1, p2, menor_dist);
    
    return 0;
}
