#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    char mapa[n+1][m+1];
    for (int i = 0; i < n; i++)
    {
       scanf("%s", mapa[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mapa[i][j] == 'W')
            {
                printf("%d %d\n", i+1, j+1);
                break;
            }
            
        }
        
    }
    
    
    return 0;
}